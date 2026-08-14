/*2.Build a YouTuber class that inherits from SocialMediaUser and adds a property channelName and a method uploadVideo(title) that prints 
'Video [title] uploaded to [channelName]'.*/

#include <iostream>
#include <string>

using namespace std;

class SocialMediaUser {
public:
    string username;

    SocialMediaUser(string name = "") {
        username = name;
    }
};

class YouTuber : public SocialMediaUser {
public:
    string channelName;

    YouTuber(string name, string channel) : SocialMediaUser(name) {
        channelName = channel;
    }

    void uploadVideo(string title) {
        cout << "Video " << title << " uploaded to " << channelName << endl;
    }
};

int main() {
    YouTuber user("Alex", "TechTips");
    user.uploadVideo("C++ Tutorial");
    return 0;
}