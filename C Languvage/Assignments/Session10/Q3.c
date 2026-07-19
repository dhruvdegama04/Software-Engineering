/*Q3.Copy the string 'Flipkart' into another string variable called shoppingApp using 
strcpy(), then print the value of shoppingApp.<br><br><em><strong>Hint:</strong> Make sure to 
declare enough space for the destination string.</em>*/ 

#include <stdio.h>
#include <string.h>

int main() {
    // Declare a destination string variable with enough space 
    // ("Flipkart" has 8 characters + 1 for the null terminator '\0')
    char shoppingApp[10];
    
    // Copy the string 'Flipkart' into shoppingApp using strcpy()
    strcpy(shoppingApp, "Flipkart");
    
    // Print the value of shoppingApp
    printf("The value of shoppingApp is: %s\n", shoppingApp);
    
    return 0;
}