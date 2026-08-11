#include<iostream>
using namespace std;

class A{ //Parent
    public:
    void classA(){
        cout<<"class A function"<<endl;
    }
};

class B{ //Parent
    public:
    void classB(){
        cout<<"class B function"<<endl;
    }
};

class C:public A,public B{ //Child
    public:
    void classC(){
        cout<<"class C function"<<endl;
    }
};



int main(){
    C c = C();
    c.classA();
    c.classB();
    c.classC();
    return 0;
}