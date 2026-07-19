#include<stdio.h>
#include<string.h>

void main(){
    char email[] ="user@gmail.com";
    char Password[] ="user@123";

    printf("Enter Email Adress :");
    char userEmail[] ="";
    scanf("%s",&userEmail);
    printf("user email = %s\n",userEmail);

    printf("Enter Password :");
    char userPass[] ="";
    scanf("%s",&userPass);
    printf("user email = %s",userPass);

    int r1 = strcmp(email,userEmail);
    printf("%d\n", r1);
    int r2 = strcmp(Password,userPass);
    printf("%d\n", r2);
    int res1 = strcmp(userEmail, email);
    int res2 = strcmp(userPass, Password);

    if(res1 == 0)
    { 
        if(res2 == 0)
        {
            printf("Login Sucessfull");
        }
        else
        {
            printf("Incorrect Password");
        }
    }
    else
    {
        printf("Email Not Exist");
    }
}
