#include<iostream>
#include<string.h>
using namespace std;

//In class all data members are private by default.
class Student{
    public :
        int id;
        char name[30];
        float per;
};

int main(){
    Student s1 = Student();
    s1.id = 1;
    cout<<"s1 id = "<<s1.id<<endl;
    strcpy(s1.name,"user1");
    cout<<"s1 name = "<<s1.name<<endl;
    return 0;
}