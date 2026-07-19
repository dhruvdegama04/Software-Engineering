/*Q3.Write a function isEligibleForOffer that takes a user's age and total
 order value, and returns true if the user is 18 or older AND the order 
value is above 500, otherwise false.<br><br><em><strong>Hint:</strong> 
Use relational and logical operators together.</em>
*/
#include<stdio.h>
// Function definition
bool isEligibleForOffer(int age, float totalOrderValue)
{
    // Returns true if age >= 18 AND totalOrderValue > 500
    return (age >= 18) && (totalOrderValue > 500.0);
}

int main() 
{
    // Test Case 1: Eligible user
    if (isEligibleForOffer(20, 600.0)) 
    {
        printf("User 1 is eligible for the offer.\n"); // Will print
    } 
    else 
    {
        printf("User 1 is not eligible.\n");
    }

    // Test Case 2: Underage user
    if (isEligibleForOffer(16, 700.0)) 
    {
        printf("User 2 is eligible for the offer.\n");
    }
    else 
    {
        printf("User 2 is not eligible.\n"); // Will print
    }

    return 0;
}
