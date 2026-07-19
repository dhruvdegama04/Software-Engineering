//Q1Declare variables for a Flipkart product: productName (as a string),price (float), and 
// rating (double). Assign sample values and print each variable with its data type.
#include <stdio.h>

int main() {
    // 1. Variable Declaration & Initialization
    char productName[] = "Wireless Earbuds"; // String represented as a character array
    float price = 1499.99f;                  // float data type
    double rating = 4.3;                    // double data type

    // 2. Printing values along with their data types
    printf("Product Name: %s\n", productName);
    printf("Price: %.2f\n", price);
    printf("Rating: %.1f\n", rating);

    return 0;
}