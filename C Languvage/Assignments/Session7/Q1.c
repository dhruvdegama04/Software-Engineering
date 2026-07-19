/*Q1.Use nested for loops to print a grid of emojis representing a 5x5 Instagram post feed, 
where each cell shows a 📷 symbol.*/

#include <stdio.h>
#include <locale.h>

int main() {
	int i,j;
    // Set the locale to utilize UTF-8 formatting for emojis
    setlocale(LC_ALL, "");

    // Outer loop for the 5 rows
    for ( i = 0; i < 5; i++) {
        // Inner loop for the 5 columns
        for ( j = 0; j < 5; j++) {
            printf("📷 ");
        }
        // Print a newline after each row is complete
        printf("\n");
    }

    return 0;
}
