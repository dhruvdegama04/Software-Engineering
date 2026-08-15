/*1.Create a Content class with properties: title, platform, views, and status. Write a method to display all details of a Content object.*/

#include <iostream>
#include <string>

using namespace std;

class Content {
public:
    string title;
    string platform;
    int views;
    string status;

    Content(string t, string p, int v, string s) {
        title = t;
        platform = p;
        views = v;
        status = s;
    }

    void display() {
        cout << "Title: " << title << endl;
        cout << "Platform: " << platform << endl;
        cout << "Views: " << views << endl;
        cout << "Status: " << status << endl;
    }
};

int main() {
    Content c1("C++ Tutorial", "YouTube", 15000, "Published");
    c1.display();

    return 0;
}