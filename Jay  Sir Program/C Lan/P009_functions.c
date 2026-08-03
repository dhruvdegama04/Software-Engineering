#include<stdio.h>
//1.pre-define
//2.user-define

//there are 4 different categories to define functions
//1.without return type without parameter
void fun1(){    //function definition
    printf("this is function 1\n");
}


//2.without return type with parameter
void fun2(int i,float f){
    printf("i = %d, f = %f\n",i,f);
}


void numLoop(int num){
    int i;
    for(i=1;i<=10;i++){
        printf("%d X %d = %d\n",num,i,(num*i));
    }
}
//3.with return type without parameter
float fun3(){
    printf("with return type without para");
    return 34.34;
}

//4.with return type with parameter
int getSquare(int num){
    printf("num is coming from main function is : %d\n",num);
    return num*num;
}

void main(){
    printf("hello\n");
    fun1();   //function calling
    fun2(12,34.34);
    int num;
    printf("enter num = ");
    scanf("%d",&num);
    numLoop(num);

    float value = fun3();
    printf("value = %f\n",value);

    printf("enter num to get sqaure = ");
    int n1;
    scanf("%d",&n1);
    int result = getSquare(n1);
    printf("square of %d is = %d",n1,result);
}