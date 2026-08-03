#include <stdio.h>
void main()
{
    //1.Assignment -> =,+=,-=,*=,/=
    int a = 12;
    printf("a = %d\n",a);

    a += 2; //a = a+2
    printf("a = %d\n",a);

    int b = 1;

    a -= b; //a =a-b 
    printf("a = %d\n",a);

    a *= 2;
    printf("a = %d\n",a);

    //2.Arithmetic -> +,-,*,/,%
    int i,j;
    printf("enter value of i = ");
    scanf("%d",&i);
    printf("enter value of j = ");
    scanf("%d",&j);

    printf("%d\n",(i+j));
    printf("%d\n",(i-j));
    printf("%d\n",(i*j));
    printf("%d\n",(i/j));
    printf("%d\n",(i%j));

    printf("enter amount of order : ");
    float amount;
    scanf("%f",&amount);

    float gst = (amount*18)/100;
    float final_amount = amount+gst;
    printf("your bill is : %f\n",final_amount);


    float base = 34.3;
    float height = 2.3;
    float areaOfTraingle = (base*height)/2;
    printf("area of triangle = %f\n",areaOfTraingle);

    //3.unary -> ++, --
    i++; //i = i+1
    printf("i = %d\n",i); //14

    int i1 = ++i;
    printf("i1 = %d\n",i1);

    printf("i = %d\n",i);
    //4.conditional -> >,>=,<,<=,==,!=
    //5.logical -> &&, || ,!
    //conditional statements

    int p =12,q=12;
    //1.simple if
    if(p > q){
        printf("i is greater than j\n");
    }


    //if else
    if(p > q){
        printf("i is greater than j\n");
    } 
    else{
        printf("j is greater than i\n");
    }



    //else if ladder
    int per = 76;
    if(per < 35){
        printf("fail\n");
    }
    else if(per >= 35 && per <= 60){
        printf("Pass Class\n");
    }
    else if(per >= 61 && per <= 70){
        printf("C grade\n");
    }
    else if(per >= 71 && per <= 80){
        printf("B grade\n");
    }
    else if(per >= 81 && per <= 90){
        printf("A grade\n");
    }
    else if(per >= 91 && per <= 100){
        printf("A+ grade\n");
    }
    else{
        printf("invalid input\n");
    }

    //nested if
    int age;
    printf("enter your age to donate blood = ");
    scanf("%d",&age);

    if(age > 18 ){

        if(age < 55){
            printf("you are eligible\n");
        }  
         else{
            printf("age is greater than 18 but not less than 55\n");
         }     
    }
    else{
        printf("age is less than 18\n");
    }

    //switch case
    int choice;
    printf("1.English 2.Hindi 3.Gujarati\n");
    printf("enter your choice : ");
    scanf("%d",&choice);

    switch (choice)
    {
    case 1:
        printf("you selected englih\n");
        // break;
    case 2:
        printf("you selected hindi\n");
        break;
    case 3:
        printf("you selected gujarati\n");
        break;
    default:
        printf("invalind input\n");
        break;
    }





    


    


}
