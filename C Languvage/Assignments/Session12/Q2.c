// Q2.Create a structure called FoodItem to store Zomato-style menu data: itemName (string), price (float), and rating (float). Initialize an array of 3 FoodItem variables with real menu items and display their details using a loop.

#include <stdio.h>

// Define the structure to store Zomato-style menu data
struct FoodItem {
    char itemName[100];
    float price;
    float rating;
};

int main() {
    // Initialize an array of 3 FoodItem variables
    struct FoodItem menu[3] = {
        {"Paneer Butter Masala", 280.50, 4.5},
        {"Chicken Biryani", 320.00, 4.7},
        {"Garlic Naan", 60.00, 4.2}
    };

    printf("--- Zomato Menu Data ---\n");
    
    // Display the details using a loop
    for (int i = 0; i < 3; i++) {
        printf("Item %d:\n", i + 1);
        printf("  Name   : %s\n", menu[i].itemName);
        printf("  Price  : %.2f INR\n", menu[i].price);
        printf("  Rating : %.1f / 5.0\n", menu[i].rating);
        printf("-----------------------\n");
    }

    return 0;
}
