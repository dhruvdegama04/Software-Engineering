/*Q1.Write a program that prints the numbers from 10 down to 1 using a for loop, similar to a countdown timer.*/ 
#include <stdio.h>

int main() {
	int i;
    printf("--- Countdown Timer ---\n");

    // Loop starts at 10 and decrements by 1 each time until it reaches 1
    for (i = 10; i >= 1; i--) {
        printf("%d\n", i);
    }

    printf("Liftoff! \n");

    return 0;
}
