/*4.Demonstrate multilevel inheritance by creating a class GamingYouTuber that inherits from YouTuber and adds a method 
streamGame(gameName) which prints '[username] is now streaming [gameName] on [channelName]'.*/

#include <iostream>
#include <string>

using namespace std;

class User {
protected:
    string username;

public:
    User(string uname) : username(uname) {}
};

class YouTuber : public User {
protected:
    string channelName;

public:
    YouTuber(string uname, string cName) : User(uname), channelName(cName) {}
};

class GamingYouTuber : public YouTuber {
public:
    GamingYouTuber(string uname, string cName) : YouTuber(uname, cName) {}

    void streamGame(string gameName) {
        cout << username << " is now streaming " << gameName << " on " << channelName << endl;
    }
};

int main() {
    GamingYouTuber gamer("PixelPro", "PixelGamingHub");
    gamer.streamGame("Minecraft");

    return 0;
}