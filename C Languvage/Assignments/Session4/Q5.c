/*Q5.Write a code snippet that demonstrates the difference between 
pre-increment (++count) and post-increment (count++) by logging the 
values before and after using both on a followerCount variable.*/
#include<stdio.h>

int main() 
{
    // --- 1. POST-INCREMENT (followerCount++) ---
    // The current value is evaluated/used first, and THEN the variable is incremented in memory.
    int followerCount = 100;

    printf("--- Post-Increment Demo ---\n");
    printf("Initial Value: %d\n", followerCount); // 100

    // Logged during the post-increment operation
    printf("Value during (followerCount++): %d\n", followerCount++); // 100 (Prints original value first!)

    // Logged immediately after the operation
    printf("Value after (followerCount++): %d\n", followerCount); // 101 (Now reflects the change)

    printf("\n-------------------------\n\n");

    // --- 2. PRE-INCREMENT (++followerCount) ---
    // The variable is incremented in memory first, and THEN the updated value is evaluated/used.
    followerCount = 100; // Resetting back to 100

    printf("--- Pre-Increment Demo ---\n");
    printf("Initial Value: %d\n", followerCount); // 100

    // Logged during the pre-increment operation
    printf("Value during (++followerCount): %d\n", ++followerCount); // 101 (Increments first, then prints!)

    // Logged immediately after the operation
    printf("Value after (++followerCount): %d\n", followerCount); // 101

    return 0;
}