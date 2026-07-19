/*Q3.Create a Flipkart discount calculator that asks the user for the total 
cart amount. Use nested if statements to check: if amount > 2000, apply 
20% discount; else if amount > 1000, apply 10% discount; else, no discount.
 Print the final amount to pay.<br><br><em><strong>Hint:</strong> 
Use nested ifs to check each discount slab.</em>
*/

#include<stdio.h>

int main() {
    float cartAmount, discount = 0.0, finalAmount;

    // Ask the user for the total cart amount
    printf("--- Flipkart Discount Calculator ---\n");
    printf("Enter the total cart amount: ");
    scanf("%f", &cartAmount);

    // Nested if-else structure to evaluate discount slabs
    if (cartAmount > 1000) {
        if (cartAmount > 2000) {
            discount = 0.20; // 20% discount
        } else {
            discount = 0.10; // 10% discount
        }
    } else {
        discount = 0.0; // No discount
    }

    // Calculate the final amount to pay
    finalAmount = cartAmount - (cartAmount * discount);

    // Print the results
    printf("\n--- Order Summary ---");
    printf("\nOriginal Amount: %.2f", cartAmount);
    printf("\nDiscount Applied: %.0f%%", discount * 100);
    printf("\nFinal Amount to Pay: %.2f\n", finalAmount);

    return 0;
}