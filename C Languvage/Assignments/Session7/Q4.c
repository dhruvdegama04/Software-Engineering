/*Q4.Write code using nested loops to print a pattern of alternating 0s and 1s in a grid, like the 
checkered background seen in some Spotify playlist covers (e.g., for a 4x4 grid, alternate 0 and 
1 in each cell).*/

#include <stdio.h>

int main() {
    int i,j,grid_size = 4;

    // Outer loop for rows
    for ( i = 0; i < grid_size; i++) {
        // Inner loop for columns
        for ( j = 0; j < grid_size; j++) {
            // Check if the sum of row and column index is even or odd
            if ((i + j) % 2 == 0) {
                printf("0 ");
            } else {
                printf("1 ");
            }
        }
        // Move to the next line after completing a row
        printf("\n");
    }

    return 0;
}
// 0 1 0 1 
// 1 0 1 0 
// 0 1 0 1 
// 1 0 1 0
