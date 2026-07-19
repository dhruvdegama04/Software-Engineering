/*Q2.Take input for two usernames (as strings) and compare them using strcmp(). Display 
whether they are the same or different.*/

#include <stdio.h>
#include <string.h>

int main() {
    // Declare two character arrays to store the usernames
    char username1[50];
    char username2[50];

    // Take input for the first username
    printf("Enter the first username: ");
    scanf("%49s", username1);

    // Take input for the second username
    printf("Enter the second username: ");
    scanf("%49s", username2);

    // Compare the two usernames using strcmp()
    if (strcmp(username1, username2) == 0) {
        printf("The usernames are the same.\n");
    } else {
        printf("The usernames are different.\n");
    }

    return 0;
}
