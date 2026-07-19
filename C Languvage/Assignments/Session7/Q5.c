/*Q5.Modify your pyramid pattern code to accept the number of rows as user input, so the user can 
set the height of the pyramid before printing.*/

#include <stdio.h>

int main() {
    int i,j,k,rows;

    // Accept dynamic user input for the number of rows
    printf("Enter the number of rows for the pyramid: ");
    scanf("%d", &rows);

    // Outer loop for the rows
    for ( i = 1; i <= rows; i++) {
        
        // Inner loop 1: Prints the spaces to center-align the row
        for ( j = 1; j <= rows - i; j++) {
            printf(" ");
        }
        
        // Inner loop 2: Prints the stars with a trailing space
        for ( k = 1; k <= i; k++) {
            printf("* ");
        }
        
        // Move to the next line after each row is printed
        printf("\n");
    }

    return 0;
}
