#include <iostream>
#include <string.h>
using namespace std;

// In class all data members are private by default.
class Student
{
    int id;
    char name[30];
    float per;

public:
    void setId(int id)
    {
        if (id > 0)
        {
            this->id = id;
            cout << id << endl;
        }
        else
        {
            cout << "negatice id not valid" << endl;
        }
    }

    void setName(char name[30])
    {
        int num = strlen(name);
        if (num < 20)
        {
            strcpy(this->name, name);
            cout << name << endl;
        }
        else
        {
            cout << "name length should not greater than 20" << endl;
        }
    }

    void setPer(float per)
    {
        this->per = per;
        cout << per << endl;
    }

    void showData()
    {
        cout << "id = " << id << " name = " << name << " percentage = " << per << endl;
    }
};

int main()
{
    Student s1 = Student();
    s1.setId(-12);
    s1.setName("user 2");
    s1.setPer(76.5);
    s1.showData();
    return 0;
}