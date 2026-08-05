#include<iostream>

using namespace std;


class Student{

    public:
    Student(){
        cout<<"default student class constructor"<<endl;
    }

    Student(int num,float per){
        cout<<"parameter student class constructor"<<num<<per<<endl;
    }


    void call(){
        cout<<"call in student"<<endl;
    }
};
int main(){
    Student s1 = Student();
    s1.call();  

    // Student s2 = Student(124);

    Student s3 = Student(124,54.5);
    
    return 0;
}