/*Q1.Declare a 1D array called dailySteps with 7 elements to store your step count for each day 
of the week, assign sample values, and print each value using a loop.
*/
#include <stdio.h>

int main() {
    // 1. Declare a 1D array called dailySteps with 7 elements
    int dailySteps[7];

    // 2. Assign sample step counts for each day of the week
    dailySteps[0] = 6500;  // Monday
    dailySteps[1] = 8200;  // Tuesday
    dailySteps[2] = 5000;  // Wednesday
    dailySteps[3] = 10000; // Thursday
    dailySteps[4] = 7400;  // Friday
    dailySteps[5] = 11200; // Saturday
    dailySteps[6] = 4500;  // Sunday

    // 3. Print each value using a loop
    printf("Daily Step Counts for the Week:\n");
    for (int i = 0; i < 7; i++) {
        printf("Day %d: %d steps\n", i + 1, dailySteps[i]);
    }

    return 0;
}
