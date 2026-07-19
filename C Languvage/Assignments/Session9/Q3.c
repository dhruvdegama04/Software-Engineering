/*Q3.Build a function that takes a 1D array of 7 integers representing your daily Zomato order 
amounts and calculates the average spend for the week.<br><br><em><strong>Hint:</strong> Use a 
loop to sum the values, then divide by the array length.</em>*/

#include <stdio.h>

// Function declaration/prototype
float calculateAverageSpend(int orders[], int length);

int main() {
    // 1. Declare a 1D array of 7 integers representing daily Zomato orders
    int dailyZomatoOrders[7] = {250, 420, 0, 180, 550, 600, 120};

    // 2. Call the function and pass the array along with its length
    float average = calculateAverageSpend(dailyZomatoOrders, 7);

    // 3. Print the calculated average formatted to 2 decimal places
    printf("Your average Zomato spend for the week is: %.2f INR\n", average);

    return 0;
}

// Function definition
float calculateAverageSpend(int orders[], int length) {
    int i,totalSum = 0;

    // Use a loop to sum the values
    for ( i = 0; i < length; i++) {
        totalSum += orders[i];
    }

    // Divide the sum by the array length
    // (float) is used for type casting to ensure decimal precision in division
    return (float)totalSum / length;
}
