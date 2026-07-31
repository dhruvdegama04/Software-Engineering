// Q2.Rewrite the following code to improve its indentation and add comments explaining each step, so that a beginner can understand what it does:<br><br>function isEven(num){if(num%2==0){return true;}else{return false;}}

#include <stdio.h>
#include <stdbool.h> 


bool isEven(int num) {
    
    if (num % 2 == 0) {
      
        return true; 
    } 
   
    else {
     
        return false;
    }
}

int main() {
    
    int testNumber = 4;
    
    if (isEven(testNumber)) {
        printf("%d is even.\n", testNumber);
    } else {
        printf("%d is odd.\n", testNumber);
    }
    
    return 0;
}
