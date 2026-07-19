/*Q3.Create a pattern that prints a pyramid of stars (*) with 6 rows, centered like the loading 
animation you see on BookMyShow when a page is loading.<br><br><em><strong>Hint:</strong> 
Use spaces to align the stars in the center for each row.</em>*/

#include <stdio.h>

int main() {
    int i,j,rows = 6;

    // Outer loop for the 6 rows
    for ( i = 1; i <= rows; i++) {
        
        // Inner loop 1: Prints the spaces to center-align the row
        for ( j = 1; j <= rows - i; j++) {
            printf(" ");
        }
        
        // Inner loop 2: Prints the stars with a trailing space
        for (int k = 1; k <= i; k++) {
            printf("* ");
        }
        
        // Move to the next line after each row is printed
        printf("\n");
    }

    return 0;
}
//      * 
//     * * 
//    * * * 
//   * * * * 
//  * * * * * 
// * * * * * *
