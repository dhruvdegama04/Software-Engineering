/*Q4.Write a program that takes a user's age and checks eligibility for
three things using if-else statements: if age >= 18, print 'Eligible
for Driving License'; if age >= 21, also print 'Eligible for Credit 
Card'; if age >= 25, also print 'Eligible for Car Rental'. Print all 
applicable messages for the given age.*/

#include<stdio.h>

int main() {
    int age;

    // Ask the user for their age
    printf("--- Eligibility Checker ---\n");
    printf("Enter your age: ");
    scanf("%d", &age);

    printf("\n--- Results ---\n");
    
    // Check all applicable conditions independently
    if (age >= 18) {
        printf("Eligible for Driving License\n");
    }
    
    if (age >= 21) {
        printf("Eligible for Credit Card\n");
    }
    
    if (age >= 25) {
        printf("Eligible for Car Rental\n");
    }

    // Optional: If the user doesn't meet any criteria
    if (age < 18) {
        printf("Not eligible for any of the options yet.\n");
    }

    return 0;
}