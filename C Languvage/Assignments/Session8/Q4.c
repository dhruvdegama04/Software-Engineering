/*Q4.Build a function formatPrice that takes a price in rupees and returns a string formatted like 
Flipkart's price tag (e.g., '₹1,599'). Use this function to display prices for three different
products.*/

#include <stdio.h>
#include <string.h>

// 1. Declare the function
void formatPrice(double price, char *formattedPrice) {
    char temp[50];
    // Convert the number to an integer string (ignoring paise for standard price tags)
    long long intPrice = (long long)price;
    sprintf(temp, "%lld", intPrice);

    int len = strlen(temp);
    int j = 0,i;

    // Copy the Rupee symbol safely into the destination buffer
    // Note: The '₹' symbol takes 3 bytes in UTF-8 encoding
    strcpy(formattedPrice, "₹");
    j = strlen(formattedPrice);

    // If the number is 3 digits or fewer, no formatting commas are needed
    if (len <= 3) {
        strcat(formattedPrice, temp);
        return;
    }

    // Process the string from right to left to apply Indian Currency formatting
    // (Thousands comma after 3 digits, then every 2 digits for Lakhs/Crores)
    for ( i = 0; i < len; i++) {
        formattedPrice[j++] = temp[i];
        
        int remainingDigits = len - 1 - i;
        
        // Place a comma after the thousands position, or every two digits before that
        if (remainingDigits == 3 || (remainingDigits > 3 && (remainingDigits - 3) % 2 == 0)) {
            formattedPrice[j++] = ',';
        }
    }
    formattedPrice[j] = '\0'; // Null-terminate the string
}

int main() {
    // Array of prices for three different products
    double productPrices[3] = {1599.00, 29999.00, 145000.00};
    char productNames[3][30] = {"Wireless Headphones", "Smart Television", "Premium Laptop"};
    char buffer[50];
    int i;

    printf("=== Flipkart Price Tags ===\n\n");

    // 2 & 3. Call the function and display the prices for three products
    for ( i = 0; i < 3; i++) {
        formatPrice(productPrices[i], buffer);
        printf("%s: %s\n", productNames[i], buffer);
    }

    return 0;
}
