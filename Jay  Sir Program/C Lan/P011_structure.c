#include<stdio.h>
#include<string.h>
struct student{
    int id;
    char name[30];
    float per;

};
void main(){
    struct student s1 = {1, "user 1",76.65};
    struct student s2 = {2,"user 2",87.6};
    printf("id = %d, name = %s, per = %f\n",s1.id,s1.name,s1.per);
    printf("id = %d, name = %s, per = %f\n",s2.id,s2.name,s2.per);
    struct student s3;
    s3.id = 12;
    printf("s3 id = %d\n",s3.id);

    strcpy(s3.name,"user 3");
    printf("s3 name = %s",s3.name);



}