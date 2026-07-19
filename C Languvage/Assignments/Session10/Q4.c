/* Q4.Build a small script that takes the user's full name as input and creates a username by 
copying only the first 5 characters using strcpy(). Print the generated username.<br><br>
<em><strong>Constraint:</strong> If the name is shorter than 5 characters, use the full name as
 the username.</em>*/

#include <stdio.h>
#include <string.h>

int main() {
    char fullName[100];
    char username[20]; // Needs to hold 5 characters + 1 null terminator '\0'

    printf("Enter your full name: ");
    // Using fgets to safely read string input (including spaces)
    fgets(fullName, sizeof(fullName), stdin);
    
    // Remove trailing newline character if present
    fullName[strcspn(fullName, "\n")] = '\0';

    // Copy up to 5 characters into username
    strncpy(username, fullName, 6);
    
    // Explicitly add the null terminator to handle names >= 5 characters safely
    username[10] = '\0';

    printf("Generated Username: %s\n", username);

    return 0;
}
