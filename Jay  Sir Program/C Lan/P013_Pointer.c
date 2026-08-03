//Pointer is a variable that stores the memory address of another variable.
//to declare a pointer we have to use *(asterisk)

#include<stdio.h>

int addition(int i, int j){
    return i+j;
}

void main(){
    int a = 12;
    int *p = &a;
    printf("address of a = %p\n",p);
    printf("value of a = %d\n",*p);
    printf("size of pointer p = %zu\n",sizeof(p));

    //1.null pointer
    int *q = NULL;
    
    //2.void pointer
    void *ptr;

    char c = 'a';
    ptr = &c;


    //3.wild pointer
    int *ptr1;

    //4.dangling pointer ->to allocate already allocated or freed memory/data



    //function with pointer
    int(*fptr)(int,int);
    fptr = &addition;
    printf("addition of nums = %d\n",fptr(12,12));

    //mutlilevel pointer

    int var = 10;
    int *pt1 = &var;

    int **pt2 = &pt1;
    printf("var value = %d\n",var);
    printf("value by pt 1 = %d\n",*pt1);
    printf("value by pt 2 = %d\n",**pt2);

    **pt2 = 20;
    printf("var value = %d\n",var);
    printf("value by pt 2 = %d\n",**pt2);

}