/*Q1.Declare a string variable called songTitle and assign it the value 'Tum Hi Ho'. Print 
the length of the string using strlen().*/

#include <stdio.h>
#include <string.h>

int main() {
    // Declare a string variable and assign the value 'Tum Hi Ho'
    char songTitle[] = "Tum Hi Ho";
    
    // Print the length of the string using strlen()
    printf("The length of the string '%s' is: %zu\n", songTitle, strlen(songTitle));
    
    return 0;
}