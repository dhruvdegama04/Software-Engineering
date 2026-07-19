/*Q2.Build a Zomato-style food suggestion tool: take the user's preferred
 meal time ('breakfast', 'lunch', 'dinner', or 'snack') and use a
 switch-case statement to suggest a popular dish for that time. 
 If the input doesn't match any meal, suggest 'Try some fruits!'.
*/
#include<stdio.h>
int main() {
    char mealTime;

    // Display options to the user
    printf("--- Zomato-style Food Suggestion Tool ---\n");
    printf("b - Breakfast\n");
    printf("l - Lunch\n");
    printf("d - Dinner\n");
    printf("s - Snack\n");
    printf("Enter your preferred meal time shortcut: ");
    scanf(" %c", &mealTime);

    // Switch case to suggest food based on the input
    switch (mealTime) {
        case 'b':
        case 'B':
            printf("Suggestion: How about some hot Chole Bhature or a Masala Dosa?\n");
            break;
            
        case 'l':
        case 'L':
            printf("Suggestion: A grand Veg/Non-Veg Thali or Hyderabadi Biryani sounds perfect!\n");
            break;
            
        case 'd':
        case 'D':
            printf("Suggestion: Treat yourself to Butter Naan with Paneer Butter Masala or Tandoori Chicken!\n");
            break;
            
        case 's':
        case 'S':
            printf("Suggestion: The classic combo of Samosa and Masala Chai is waiting for you!\n");
            break;
            
        default:
            printf("Try some fruits!\n");
            break;
    }

    return 0;
}