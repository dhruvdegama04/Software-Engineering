/*3.Implement file handling in your Music Listening Logger so that when the user logs their daily
 listening minutes, the data is saved to a file named music_log.txt for persistence.*/

 #include <stdio.h>

void log_minutes() 
{
    int minutes;

    printf("\nEnter listening minutes for today: ");
    if (scanf("%d", &minutes) != 1 || minutes < 0) 
    {
        printf("Invalid input! Please enter a valid positive number.\n");
        // Clear invalid input from memory buffer
        while (getchar() != '\n'); 
        return;
    }

    // "a" mode appends new data to the end of music_log.txt
    FILE *file = fopen("music_log.txt", "a");

    if (file == NULL) 
    {
        printf("Error: Unable to open or create music_log.txt!\n");
        return;
    }

    // Save minutes to file
    fprintf(file, "Logged Minutes: %d\n", minutes);

    // Save and close
    fclose(file);

    printf("--> Saved %d minutes to music_log.txt successfully!\n", minutes);
}

void view_logs() 
{
    char ch;
    
    // "r" mode opens file for reading
    FILE *file = fopen("music_log.txt", "r");

    if (file == NULL) 
    {
        printf("\nNo saved logs found yet. Try logging some minutes first!\n");
        return;
    }

    printf("\n--- YOUR SAVED MUSIC LOGS ---\n");
    
    // Read character by character until End-Of-File (EOF)
    while ((ch = fgetc(file)) != EOF) 
    {
        putchar(ch);
    }
    
    printf("-----------------------------\n");

    fclose(file);
}

int main() {
    int choice;

    while (1) 
    {
        printf("\n=== MUSIC LISTENING LOGGER ===\n");
        printf("1. Log Daily Listening Minutes\n");
        printf("2. View Log History\n");
        printf("3. Exit\n");
        printf("Choose an option (1-3): ");

        if (scanf("%d", &choice) != 1) 
        {
            printf("Invalid choice! Enter a number between 1 and 3.\n");
            while (getchar() != '\n'); 
            continue;
        }

        if (choice == 1) {
            log_minutes();
        } 
        else if (choice == 2)
        {
            view_logs();
        }
         else if (choice == 3) 
        {
            printf("Exiting Logger. Happy listening!\n");
            break;
        } 
        else 
        {
            printf("Invalid choice! Please select 1, 2, or 3.\n");
        }
    }

    return 0;
}