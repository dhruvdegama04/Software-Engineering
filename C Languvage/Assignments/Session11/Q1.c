// Q1.Declare an integer variable called likes and a pointer variable called ptrLikes; assign 
// likes a value, point ptrLikes to likes, and print both the value and the address stored in 
// ptrLikes.

#include <stdio.h>

int main() {

    int likes;
    
    int *ptrLikes;
    
    likes = 250;

    ptrLikes = &likes;

    printf("Value pointed to by ptrLikes: %d\n", *ptrLikes);
    printf("Address stored in ptrLikes: %p\n", (void*)ptrLikes);
    
    return 0;
}
