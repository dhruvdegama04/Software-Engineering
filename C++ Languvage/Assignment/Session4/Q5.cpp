/*5.Implement hierarchical inheritance by creating an InstagramInfluencer class that inherits from SocialMediaUser and adds a method 
postStory(storyTitle) which prints '[username] posted a new story: [storyTitle]'.<br><br><em><strong>Hint:</strong> Think about how
 SocialMediaUser is the parent for YouTuber, Podcaster, and InstagramInfluencer.</em>*/

 #include <iostream>
#include <string>

using namespace std;

class SocialMediaUser {
protected:
    string username;

public:
    SocialMediaUser(string name) : username(name) {}
};

class InstagramInfluencer : public SocialMediaUser {
public:
    InstagramInfluencer(string name) : SocialMediaUser(name) {}

    void postStory(string storyTitle) {
        cout << username << " posted a new story: " << storyTitle << endl;
    }
};

int main() {
    InstagramInfluencer user("alex_vibe");
    user.postStory("Morning Chai & Chill");

    return 0;
}