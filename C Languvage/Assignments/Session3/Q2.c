//Q2.Create a constant variable to store the GST rate (for example, 18%) and use it to 
// calculate the final price of a Zomato order with a given base price.<br><br><em><strong>
// Constraint:</strong> The GST rate must not be changeable after its initial assignment.</em>
#include<stdio.h>

int main() {
    // 1. Declare a constant variable for the GST rate (18%)
    // The 'const' keyword enforces the constraint that it cannot be changed.
    const float GST_RATE = 0.18f; 
    
    // 2. Given base price for the Zomato order
    float base_Price = 450.00f;
    
    // 3. Calculate GST amount and the final price
    float gst_Amount = base_Price * GST_RATE;
    float final_Price = base_Price + gst_Amount;
    
    // 4. Print the breakdown and final order price
    printf("--- Zomato Order Bill ---\n");
    printf("Base Price: %.2f\n", base_Price);
    printf("GST Rate: %.0f%%\n", GST_RATE * 100);
    printf("GST Amount: %.2f\n", gst_Amount);
    printf("-------------------------\n");
    printf("Final Price: %.2f\n", final_Price);
    
    return 0;
}