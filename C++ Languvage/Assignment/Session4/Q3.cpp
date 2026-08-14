/*3.Create a Podcaster class that also inherits from SocialMediaUser and adds a property podcastName and a method 
publishEpisode(episodeTitle) that prints 'Episode [episodeTitle] published on [podcastName]'.*/

#include <iostream>
#include <string>

using namespace std;

class SocialMediaUser {
public:
    string username;
};

class Podcaster : public SocialMediaUser {
public:
    string podcastName;

    Podcaster(string name = "") : podcastName(name) {}

    void publishEpisode(string episodeTitle) {
        cout << "Episode " << episodeTitle << " published on " << podcastName << endl;
    }
};

int main() {
    Podcaster myPod;
    myPod.podcastName = "TechTalks";
    myPod.publishEpisode("Understanding C++ Inheritance");
    return 0;
}