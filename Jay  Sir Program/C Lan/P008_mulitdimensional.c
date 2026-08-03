#include<stdio.h>

void main(){
    int a[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int r,c;
    
    for(r=0;r<=2;r++){
        for(c=0;c<=2;c++){
            printf("%d ",a[r][c]);
        }
        printf("\n");
    }
}
