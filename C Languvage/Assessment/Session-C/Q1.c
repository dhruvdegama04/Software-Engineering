/*Mini Project: Student Productivity Tracker
Objective:
Build a console-based Student Productivity Tracker that logs daily study hours across subjects
for a full week, combining arrays, structures, functions, and file handling from Module 3 into a
single working program.
Your project must:
The program must be menu-driven with at least 3 options: (1) Log Today's Study Hours, (2)
View Weekly Report, (3) Save & Exit.
Define a struct StudyLog { char subject[40]; float hours[7]; } and create an array of at least 3
subject records.
Write a function that calculates and displays the weekly total hours and daily average for
each subject.
Display a simple text-based progress chart: for each subject, print one filled dot (•) per hour
studied that day (truncate to nearest integer).
On exit, save all records to a file named productivity_log.txt using fprintf(), with each subject's
name and 7 daily values written as a single comma-separated line.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NUM_SUBJECTS 3
#define DAYS_IN_WEEK 7

typedef struct 
{
    char subject[40];
    float hours[7];
} StudyLog;

const char *DAYS[7] = {"Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun"};

void clearInputBuffer(void)
{
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

int main(void) 
{
    StudyLog logs[NUM_SUBJECTS] = 
	{
        {"Mathematics", {0}},
        {"Computer Science", {0}},
        {"Physics", {0}}
};

    FILE *file = fopen("productivity_log.txt", "r");
    if (file != NULL) 
	{
        char line[256];
        int idx = 0,j;
        while (fgets(line, sizeof(line), file) && idx < NUM_SUBJECTS) 
		{
            line[strcspn(line, "\r\n")] = 0;
            char *token = strtok(line, ",");
            if (token != NULL) 
			{
                strncpy(logs[idx].subject, token, 39);
                logs[idx].subject[39] = '\0';
                for ( j = 0; j < DAYS_IN_WEEK; j++) 
				{
                    token = strtok(NULL, ",");
                    if (token != NULL) 
					{
                        logs[idx].hours[j] = atof(token);
                    }
                }
                idx++;
            }
        }
        fclose(file);
    }

    int choice,i,j,k;
    do {
        printf("\n--- MENU ---\n");
        printf("1. Log Today's Study Hours\n");
        printf("2. View Weekly Report\n");
        printf("3. Save & Exit\n");
        printf("Enter choice: ");

        if (scanf("%d", &choice) != 1) 
		{
            clearInputBuffer();
            continue;
        }

        if (choice == 1) 
		{
            int day;
            printf("\nSelect Day (1-7, Mon-Sun): ");
            if (scanf("%d", &day) != 1 || day < 1 || day > 7) 
			{
                clearInputBuffer();
                continue;
            }
            int d = day - 1;
            for ( i = 0; i < NUM_SUBJECTS; i++)
			{
                printf("Enter hours for %s: ", logs[i].subject);
                scanf("%f", &logs[i].hours[d]);
            }
        } 
        else if (choice == 2) 
		{
            printf("\n--- WEEKLY REPORT ---\n");
            for ( i = 0; i < NUM_SUBJECTS; i++) 
			{
                float total = 0;
                for ( j = 0; j < DAYS_IN_WEEK; j++) 
				{
                    total += logs[i].hours[j];
                }
                printf("\nSubject: %s\n", logs[i].subject);
                printf("Total: %.2fh | Avg: %.2fh\n", total, total / DAYS_IN_WEEK);
                printf("Chart:\n");
                
                for ( j = 0; j < DAYS_IN_WEEK; j++) 
				{
                    printf("  %s: ", DAYS[j]);
                    int dots = (int)logs[i].hours[j];
                    if (dots == 0) 
					{
                        printf("-");
                    } else {
                        for ( k = 0; k < dots; k++) 
						{
                            printf("*");
                        }
                    }
                    printf("\n");
                }
            }
        } 
        else if (choice == 3) {
            file = fopen("productivity_log.txt", "w");
            if (file != NULL) 
			{
                for ( i = 0; i < NUM_SUBJECTS; i++) 
				{
                    fprintf(file, "%s", logs[i].subject);
                    for ( j = 0; j < DAYS_IN_WEEK; j++)
					{
                        fprintf(file, ",%.2f", logs[i].hours[j]);
                    }
                    fprintf(file, "\n");
                }
                fclose(file);
            }
            printf("Saved. Goodbye!\n");
        }
    } while (choice != 3);

    return 0;
}
