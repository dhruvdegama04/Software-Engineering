/*Q2.Build a Flipkart-style discount calculator: given product price, 
discount percentage, and a boolean isMember, use arithmetic and 
logical operators to calculate the final price (apply an extra 5%
 off if isMember is true).*/
#include <stdio.h>
#include <stdbool.h>

// Function to calculate the final price
float FlipkartDiscount(float productPrice, float discountPercentage, bool isMember) 
{
    // 1. Calculate price after the initial product discount using arithmetic operators
    float baseDiscount = productPrice * (discountPercentage / 100.0);
    float finalPrice = productPrice - baseDiscount;

    // 2. Use a logical condition to apply an extra 5% off if isMember is true
    if (isMember) {
        finalPrice = finalPrice * 0.95; // 5% off means paying 95% of the price
    }

    return finalPrice;
}

int main() 
{
    float price = 1000.0;
    float discount = 10.0;

    // Test Case 1: Regular customer (isMember = false)
    float regularPrice = FlipkartDiscount(price, discount, false);
    printf("Regular Customer Price: INR %.2f\n", regularPrice); 
    // Output: INR 900.00

    // Test Case 2: Flipkart Plus Member (isMember = true)
    float memberPrice = FlipkartDiscount(price, discount, true);
    printf("Plus Member Price: INR %.2f\n", memberPrice); 
    // Output: INR 855.00

    return 0;
}