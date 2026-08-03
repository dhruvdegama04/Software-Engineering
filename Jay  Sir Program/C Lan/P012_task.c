#include<stdio.h>
#include<string.h>

void main(){

    printf("1.small Price : 150- > offer(buy 4 and get 500 ml coke)\n");
    printf("2.medium Price : 250- > offer(buy 3 and get 1 ltr coke)\n");
    printf("3.large Price : 500- > offer(buy 2 and get 500 ml coke + ice)\n");
    printf("4.monster Price : 800- > offer(buy 2 and get 1ltr coke + ice + brownie)\n");

    printf("enter size of pizza : ");
    char size[30];
    scanf("%s",&size);

    int qty=0,offerCount=0;
    if(!strcmp(size,"small")){
        printf("enter qty : ");
        scanf("%d",&qty);
        if(qty >= 4){
            offerCount = qty / 4;
            printf("Your Bill : %d\n",(150*qty));
            printf("you'll get offer %d times",offerCount);
        }
        else{
            printf("Pizza bill : %d\n",(150*qty));
        }
    }
    if(!strcmp(size,"medium")){

    }
    if(!strcmp(size,"large")){

    }
    if(!strcmp(size,"monster")){

    }
}