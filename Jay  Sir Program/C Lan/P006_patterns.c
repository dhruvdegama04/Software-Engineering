#include<stdio.h>

void main(){
    int i,j; 
    for(i = 1;i<=5;i++){ //row
        for(j = 1;j<=5;j++){ //col
            printf("*");
        }
        printf("\n");
    }

    for(i = 1;i<=10;i++){ //row
        for(j = 1;j<=i;j++){ //col
            printf("*");
        }
        printf("\n");
    }

     for(i = 1;i<=5;i++){ //row
        for(j = 1;j<=i;j++){ //col
            printf("%d",j);
        }
        printf("\n");
    }
    for(i = 1;i<=5;i++){ //row
        for(j = 1;j<=i;j++){ //col
            printf("%d",i);
        }
        printf("\n");
    }


    int s;
    for(i=1;i<=5;i++){
        for(s = 4;s>=i;s--){
            printf(" ");
        }
        for(j=1;j<=i;j++){
            printf("* ");
        }
        printf("\n");
    }

    for(i=1;i<=5;i++){
        for(s = 2;s<=i;s++){
            printf(" ");
        }
        for(j=5;j>=i;j--){
            printf("* ");
        }
        printf("\n");
    }
}