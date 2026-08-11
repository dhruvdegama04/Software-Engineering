#include<iostream>
using namespace std;

//single
class A{ //Parent/base
    public: 
    // A(){
    //     cout<<"A class constructor"<<endl;
    // }
    void classA(){
        cout<<"class A function"<<endl;
    }
};

class B: public A{ //child/derived
    public:
    B(){
        // cout<<"B cons"<<endl;
    }
    void classB(){
        cout<<"class B function"<<endl;
    }
};

//Multilevel

class C: public B{ //child/derived
    public:

    void classC(){
        cout<<"class C function"<<endl;
    }
};


int main(){
    B b = B();
    b.classA();
    b.classB();

    C c= C();
    c.classA();
    c.classB();
    c.classC();
    return 0;
}