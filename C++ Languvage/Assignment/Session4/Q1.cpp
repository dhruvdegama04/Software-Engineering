/*1.Create a base class called SocialMediaUser with properties username and followers, and a method displayProfile() that prints the username 
and follower count.*/

#include <iostream>
#include <string>

using namespace std;

class SocialMediaUser {
protected:
    string username;
    int followers;

public:
    SocialMediaUser(string uname, int count) : username(uname), followers(count) {}

    void displayProfile() {
        cout << "Username: " << username << endl;
        cout << "Followers: " << followers << endl;
    }
};

int main() {
    SocialMediaUser user("tech_guru", 12500);
    user.displayProfile();
    return 0;
}