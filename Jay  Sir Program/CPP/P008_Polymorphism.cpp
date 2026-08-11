#include<iostream>

using namespace std;
//Oveloading
class Calculate{

    public:
    void addition(int a,int b){
        cout<<a+b<<endl;
    }

    void fun(){
        cout<<"funin parent"<<endl;
    }

    void addition(int a,int b,int c){
        cout<<a+b+c<<endl;
    }
   
};

//Overriding
class Override:public Calculate{
    public:
    void addition(int a,int b){
        cout<<a+b<<endl;
    }
};

int main(){
    Calculate c = Calculate();
    c.addition(1,2,3);

    Override o = Override();
    o.addition(1,2);
    
    o.fun();
    return 0;
}