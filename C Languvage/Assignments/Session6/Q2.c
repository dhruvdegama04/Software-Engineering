/*Q2.Create a menu-driven console app that lets the user: 1) View your 
favorite 3 IPL teams, 2) Add a new team, 3) Exit. Use a while loop to
 keep showing the menu until the user chooses Exit.<br><br><em><strong>
Hint:</strong> Use input() (or Scanner in Java) to get the user's choice 
each time.</em>*/
#include <stdio.h>

int main() {
    // 2D Array initialized with 3 favorite IPL teams
    char iplTeams[10][20] = {"MI", "CSK", "RCB"};
    
    int teamCount = 3; // Keeps track of the total number of teams
    int choice;

    // Infinite loop to keep showing the menu until option 3 is selected
    while (1) {
        // Display the menu options
        printf("\n--- IPL Team Manager ---\n");
        printf("1. View favorite IPL teams\n");
        printf("2. Add a new team\n");
        printf("3. Exit\n");
        printf("Enter your choice (1-3): ");
        
        // Read the user's menu choice
        scanf("%d", &choice);

        // Switch case to handle user selection
        switch (choice) {
        	int i;
            case 1:
                // Print all the current teams in the list
                printf("\nYour Favorite IPL Teams:\n");
                for (i = 0; i < teamCount; i++) {
                    printf("%d. %s\n", i + 1, iplTeams[i]);
                }
                break;

            case 2:
                // Check if there is space available to add a new team
                if (teamCount < 10) {
                    printf("\nEnter the name of the new IPL team (e.g., GT): ");
                    
                    // Read the new team name and store it in the array
                    scanf("%s", iplTeams[teamCount]); 
                    
                    printf("'%s' has been added successfully!\n", iplTeams[teamCount]);
                    teamCount++; // Increment the total count of teams
                } else {
                    // Message if the array limit is reached
                    printf("\nTeam limit reached! Cannot add more teams.\n");
                }
                break;

            case 3:
                // Terminate the program execution
                printf("\nExiting the app. Thank you!\n");
                return 0; 

            default:
                // Handle invalid choice inputs
                printf("\nInvalid choice! Please select 1, 2, or 3.\n");
        }
    }

    return 0;
}
