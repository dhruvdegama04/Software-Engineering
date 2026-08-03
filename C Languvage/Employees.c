#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Employee {
    int id;
    char name[50];
    char contact[20];
    char department[50];
};

void addEmployee() {
    struct Employee e;
    
    FILE *file = fopen("employee.txt", "a");

    if (file == NULL) {
        printf("Error opening file!\n");
        return;
    }

    printf("\n--- Enter Employee Details ---\n\n");
    printf("Enter ID : ");
    scanf("%d", &e.id);

    printf("Enter Name : ");
    scanf("%s", e.name);

    printf("Enter Contact : ");
    scanf("%s", e.contact);

    printf("Enter Department : ");
    scanf("%s", e.department);

    fprintf(file, "%d %s %s %s\n", e.id, e.name, e.contact, e.department);
    
    fclose(file);
    printf("\n--> Data saved successfully!\n");
}

void displayEmployees() {
    struct Employee e;

    FILE *file = fopen("employee.txt", "r");

    if (file == NULL) {
        printf("\nNo data found or file does not exist!\n");
        return;
    }

    printf("\n=====================================\n");
    printf("          EMPLOYEE RECORDS           \n");
    printf("=====================================\n");

    while (fscanf(file, "%d %s %s %s", &e.id, e.name, e.contact, e.department) != EOF) {
        printf("ID         : %d\n", e.id);
        printf("Name       : %s\n", e.name);
        printf("Contact    : %s\n", e.contact);
        printf("Department : %s\n", e.department);
        printf("-------------------------------------\n");
    }

    fclose(file);
}

int main() {
    int choice;

    while (1) {
        printf("\n--- Menu ---\n\n");
        printf("1. Add Employee\n");
        printf("2. Display All Employees\n");
        printf("3. Exit\n");
        printf("Enter choice (1-3): ");
        scanf("%d", &choice);

        if (choice == 1) 
        {
            addEmployee();
        }
        else if (choice == 2) 
        {
            displayEmployees();
        } 
        else if (choice == 3) 
        {
            printf("Save Or 2Exit program.\n");
            break;
        } 
        else 
        {
            printf("Invalid choice! Try again.\n");
        }
    }

    return 0;
}