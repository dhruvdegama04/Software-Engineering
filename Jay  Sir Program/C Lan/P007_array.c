#include<stdio.h>

void main()
{
    int a[] ={12,23423,33465,4345,5345,3466,5345,8456,9456,1046};
    int index;
    for(index=0;index<=9;index++){
        printf("a[%d] = %d\n",index,a[index]);
    }
    int sum= 0;
    for(index = 0;index<=9;index++){
        sum = sum+a[index];
    }
    printf("sum = %d\n",sum);
    printf("enter number to search in array : ");
    int num;
    scanf("%d",&num);
    int counter=0;
    for(index=0;index<=9;index++)
    {
        if(num == a[index]){
            counter++;
        }
    }
    if(counter >0){
        printf("%d is exist %d times \n",num,counter);
    }
    else{
        printf("%d is not exist \n",num);
    }

    int arr[5];
    for(index=0;index<=4;index++){
        printf("enter element at arr[%d] : ",index);
        scanf("%d",&a[index]);
    }

    int i = 1;
    printf("i = %d\n",i);
}