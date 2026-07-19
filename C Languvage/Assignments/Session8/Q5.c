/*Q5.Refactor an existing function you wrote above to make it reusable for both product names and 
usernames (for example, a function that capitalizes the first letter of any string).<br><br><em>
<strong>Constraint:</strong> The refactored function should work for any string input, not just 
a specific use case.</em>
*/
#include <stdio.h>
#include <ctype.h>
#include <string.h>

// Universal Constraint: The function accepts ANY string input and alters it in place.
void capitalizeWords(char *str) {
    int i = 0;
    int isNewWord = 1; // Flag to track the start of a word

    while (str[i] != '\0') {
        if (str[i] == ' ') {
            isNewWord = 1; // Next non-space character will be a new word
        } else {
            if (isNewWord) {
                str[i] = toupper(str[i]); // Capitalize the first letter
                isNewWord = 0;
            } else {
                str[i] = tolower(str[i]); // Ensure the rest of the word is lowercase
            }
        }
        i++;
    }
}

int main() {
    // Test Case 1: Product Name
    char product[30] = "nIkE aIr mAx";
    
    // Test Case 2: Username
    char username[30] = "vIrat kOhli";

    printf("--- Before Refactored Function ---\n");
    printf("Product: %s\n", product);
    printf("Username: %s\n\n", username);

    // Reusing the exact same function for completely different use cases
    capitalizeWords(product);
    capitalizeWords(username);

    printf("--- After Refactored Function ---\n");
    printf("Product: %s\n", product);
    printf("Username: %s\n", username);

    return 0;
}