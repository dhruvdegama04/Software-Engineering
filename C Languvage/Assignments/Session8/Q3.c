/*Q3.Write two functions: increaseFollowersByValue and increaseFollowersByReference. Each should 
take a followers count and add 1000 to it, but one should use pass-by-value and the other 
pass-by-reference. Show how the original followers count changes (or doesn't) after calling each 
function.*/

#include <stdio.h>

// 1. Pass-by-Value Function
// This receives a copy of the actual value. Changes remain local to the function.
void increaseFollowersByValue(int followers) {
    followers += 1000;
    printf("Inside increaseFollowersByValue: %d\n", followers);
}

// 2. Pass-by-Reference Function
// This receives the memory address (pointer) of the original variable.
// Modifying it changes the variable outside the function.
void increaseFollowersByReference(int *followers) {
    *followers += 1000; // Dereference pointer to modify the original value
    printf("Inside increaseFollowersByReference: %d\n", *followers);
}

int main() {
    int originalFollowers = 5000;

    printf("--- Initial State ---\n");
    printf("Original Followers Count: %d\n\n", originalFollowers);

    // Testing Pass-by-Value
    printf("--- Calling Pass-by-Value ---\n");
    increaseFollowersByValue(originalFollowers);
    printf("After increaseFollowersByValue (in main): %d\n\n", originalFollowers);

    // Testing Pass-by-Reference
    printf("--- Calling Pass-by-Reference ---\n");
    // We pass the address of originalFollowers using the '&' operator
    increaseFollowersByReference(&originalFollowers);
    printf("After increaseFollowersByReference (in main): %d\n", originalFollowers);

    return 0;
}
