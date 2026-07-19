/*Q2.Create a function addToCart that takes a shopping cart array and a product name, adds the 
product to the cart, and prints the updated cart. Demonstrate how passing the cart array by 
reference allows changes to persist outside the function.<br><br><em><strong>Hint:</strong> 
In languages like JavaScript, arrays are passed by reference. In C/C++, use pointers for 
reference behavior.</em>*/

#include <stdio.h>
#include <string.h>

#define MAX_ITEMS 5
#define MAX_NAME_LEN 30

// 1. Declare the function
// The cart parameter receives the memory address of the 2D array (pass-by-reference)
void addToCart(char cart[MAX_ITEMS][MAX_NAME_LEN], int *itemCount, const char *productName) {
	int i;
    if (*itemCount < MAX_ITEMS) {
        // Copy the product name into the cart array at the current item count index
        strcpy(cart[*itemCount], productName);
        (*itemCount)++; // Increment the total number of items using its pointer
        
        // Print the updated cart from inside the function
        printf("--- Updated Cart (Inside Function) ---\n");
        for ( i = 0; i < *itemCount; i++) {
            printf("%d. %s\n", i + 1, cart[i]);
        }
        printf("--------------------------------------\n\n");
    } else {
        printf("Cart is full! Cannot add %s.\n\n", productName);
    }
}

int main() {
    // Initialize an empty shopping cart (2D array) and item counter
    char shoppingCart[MAX_ITEMS][MAX_NAME_LEN] = {0};
    int totalItems = 0,i;

    printf("Initial total items outside function: %d\n\n", totalItems);

    // 2. Call the function to add products
    // We pass 'shoppingCart' (array address) and '&totalItems' (address of counter)
    addToCart(shoppingCart, &totalItems, "Wireless Mouse");
    addToCart(shoppingCart, &totalItems, "Mechanical Keyboard");

    // 3. Demonstrate that changes persisted outside the function
    printf("=== Verifying Cart Outside Function ===\n");
    printf("Total items tracked in main(): %d\n", totalItems);
    for ( i = 0; i < totalItems; i++) {
        printf("Item %d: %s\n", i + 1, shoppingCart[i]);
    }
    printf("=======================================\n");

    return 0;
}
