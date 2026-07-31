/*Build a menu-driven C program that lets a user log and view personal daily expenses, and
saves all records to a text file on exit.
Define a struct Expense with fields: category (char[30]) and amount (float). Allocate an array
to store up to 10 Expense entries.
Present a menu with 3 options: (1) Add Expense, (2) View All Expenses, (3) Save & Exit. Loop until
the user selects option 3.
In the View option, display all logged expenses in a formatted list and print the running total at
the bottom.
On exit (option 3), write all expense records to a file named expenses.txt using fprintf(), with
one record per line in the format: category,amount.
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct Expense {
    char category[30];
    float amount;
};

int main() {
    struct Expense expenses[10];
    int count = 0;
    int choice = 0;
    int i;

    while (choice != 3) {
        printf("\n1. Add Expense\n");
        printf("2. View All Expenses\n");
        printf("3. Save & Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if (choice == 1) 
		{
            if (count < 10)
			 {
                printf("Enter Category: ");
                scanf("%s", expenses[count].category);
                
                printf("Enter Amount: ");
                scanf("%f", &expenses[count].amount);
                
                count++;
                printf("Expense added!\n");
            } 
			else
			 {
                printf("List is full (max 10)!\n");
            }
        } 
        else if (choice == 2)
		 {
            if (count == 0)
			 {
                printf("No expenses logged yet.\n");
            } 
			else 
			{
                float total = 0;
                printf("\n--- EXPENSES ---\n");
                for ( i = 0; i < count; i++) {
                    printf("%d. %s - $%.2f\n", i + 1, expenses[i].category, expenses[i].amount);
                    total += expenses[i].amount;
                }
                printf("Running Total: $%.2f\n", total);
            }
        } 
        else if (choice == 3) 
		{
            FILE *file = fopen("expenses.txt", "w");
            if (file != NULL)
			 {
                for ( i = 0; i < count; i++)
				 {
                    fprintf(file, "%s,%.2f\n", expenses[i].category, expenses[i].amount);
                }
                fclose(file);
                printf("Saved to expenses.txt. Goodbye!\n");
            }
        } 
        else 
		{
            printf("Invalid choice!\n");
        }
    }

    return 0;
}
