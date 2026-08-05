#include<iostream>

using namespace std;
//Encapsulation -> wrapping data into single unit is called as encapsulation
//copy constructor-> for object cloning(copy data of one object to other)
class User{

    int id;
    string name;
    string address;
    int contact;
    
    public:
    User(){

    }

    User(int id,string name, string address, int contact){
        this-> id = id;
        this-> name = name;
        this -> address = address;
        this-> contact=  contact;
    }
    
    void setId(int id){
        this-> id = id;
    }

    int getId(){
        return this->id;
    }


    void setName(string name){
        this->name = name;
    }

    string getName(){
        return this-> name;
    }


    void setAddress(string address){
        this-> address = address;
    }

    string getAddress(){
        return this->address;
    }

    void setContact(int contact){
        this-> contact = contact;
    }

    int getContact(){
        return this->contact;
    }

};

int main(){

    User u1 = User(1,"user1","ahmedabad",98765432);

    User u2 = User();
    u2.setId(2);
    u2.setName("user2");
    u2.setAddress("mumbai");
    u2.setContact(12352365);

    cout<<u2.getId();
    cout<<u2.getAddress();
    
    return 0;
}