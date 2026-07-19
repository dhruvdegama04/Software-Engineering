/*Q1.Declare a function called getUserInitials that takes a user's full name (like 'Virat Kohli') 
and returns their initials in uppercase (e.g., 'VK'). Call this function with your favorite
 cricketer's name and print the result.*/

#include <stdio.h>
#include <ctype.h>
#include <string.h>

// 1. Declare the function
void getUserInitials(const char *fullName, char *initials) {
    int i = 0;
    int j = 0;
    int isNewWord = 1; // Flag to identify the start of a word

    while (fullName[i] != '\0') {
        if (fullName[i] == ' ') {
            isNewWord = 1; // The next non-space character starts a new word
        } else if (isNewWord && fullName[i] != ' ') {
            initials[j] = toupper(fullName[i]); // Convert to uppercase and store
            j++;
            isNewWord = 0; // Reset flag until the next space
        }
        i++;
    }
    initials[j] = '\0'; // Null-terminate the destination string
}

int main() {
    // Favorite cricketer's name
    char cricketer[] = "Virat Kohli";
    char result[10]; // Buffer to hold the extracted initials

    // 2. Call the function
    getUserInitials(cricketer, result);

    // 3. Print the result
    printf("The initials of %s are: %s\n", cricketer, result);

    return 0;
}