/*Q2.Build a right-angled triangle pattern using nested loops, where each row displays increasing
numbers starting from 1, similar to how a leaderboard on a gaming app shows rank numbers.*/

#include <stdio.h>

int main() {
	int i,j;
    int rows = 5;

    // Outer loop for the number of rows
    for ( i = 1; i <= rows; i++) {
        // Inner loop to print numbers starting from 1 up to the current row number
        for ( j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        // Move to the next line after completing a row
        printf("\n");
    }

    return 0;
}
//OUTPUT
// 1 
// 1 2 
// 1 2 3 
// 1 2 3 4 
// 1 2 3 4 5
