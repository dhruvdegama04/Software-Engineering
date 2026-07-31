// Q3.Given an array of 5 order amounts (e.g., Zomato orders), use a pointer to iterate through the array and print each amount along with its memory address.<br><br><em><strong>Hint:</strong> Use pointer arithmetic to move to the next element.</em>

#include <stdio.h>

int main() {
    
    float orders[5] = {249.50, 580.00, 120.25, 899.90, 450.00};
    int i;
    
    float *ptr = orders;
    
    printf("--- Zomato Order Details ---\n\n");
    
    for ( i = 0; i < 5; i++) 
	{
        
        printf("Order %d: Amount = %.2f | Memory Address = %p\n", i + 1, *(ptr + i), (void*)(ptr + i));
    }
    
    return 0;
}
