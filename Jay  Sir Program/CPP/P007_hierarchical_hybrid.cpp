#include<iostream>
using namespace std;

//hierarchical
class A{ //Parent
    public:
    void classA(){
        cout<<"class A function"<<endl;
    }
};

class B:public A{ //Child
    public:
    void classB(){
        cout<<"class B function"<<endl;
    }
};

class C:public A{ //Child
    public:
    void classC(){
        cout<<"class C function"<<endl;
    }
};


//hybrid
class D:public B,public C{
    public:
    void classD(){
        cout<<"class D function"<<endl;
    }
};


int main(){
    B b = B();
    b.classA();
    b.classB();

    C c = C();
    c.classA();
    c.classC();
    return 0;
}