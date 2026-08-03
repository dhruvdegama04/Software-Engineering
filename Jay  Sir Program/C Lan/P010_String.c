#include <stdio.h>
#include <string.h>
// String is sequence of characters terminated with null character
void main()
{
    char s[] = {'h', 'e', 'l', 'l', 'o', '\0'};
    printf("%s\n", s);
    printf("%c\n", s[0]);

    char name[] = "hello";
    printf("name = %s\n", name);

    char a[] = "c language is fundamentals for all languages";
    int size = strlen(a);
    printf("number of character in a  = %d\n", size);

    char i[] = "hello";
    char j[] = "";
    strcpy(j, i);
    printf("j = %s\n", j);

    char a1[] = "hello";
    char b1[] = "hello";
    int num = strcmp(a1, b1);
    printf("num = %d\n", num);

    char email[30] = "user@gmail.com";
    char password[30] = "user@123";

    printf("enter email = ");
    char userEmail[30];
    scanf("%s", &userEmail);
    printf("user email = %s\n", userEmail);

    printf("enter password = ");
    char userPass[30];
    scanf("%s", &userPass);
    printf("user password = %s\n", userPass);

    int r1 = strcmp(email, userEmail);
    printf("%d\n", r1);
    int r2 = strcmp(password, userPass);
    printf("%d\n", r2);
    // int res1 = strcmp(userEmail, email);
    // int res2 = strcmp(userPass, password);
    if (!strcmp(userEmail, email))
    {
        if (!strcmp(userPass, password))
        {
            printf("login sucessful");
        }
        else
        {
            printf("incorrect password");
        }
    }
    else
    {
        printf("email not exist");
    }
}