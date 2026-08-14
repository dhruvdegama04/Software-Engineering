/*5.Explain in your own words the difference between encapsulation and abstraction, using examples from any social media app you use daily 
(like Instagram or WhatsApp).*/

#include <iostream>
#include <string>

using namespace std;

class SocialMediaEngine {
public:
    virtual void postContent(const string& content) = 0;
    virtual ~SocialMediaEngine() = default;
};

class InstagramAccount : public SocialMediaEngine {
private:
    string accountHolder;
    int followerCount;

public:
    InstagramAccount(const string& name) : accountHolder(name), followerCount(0) {}

    void addFollower() {
        followerCount++;
    }

    int getFollowerCount() const {
        return followerCount;
    }

    void postContent(const string& content) override {
        compressVideo();
        uploadToServer();
        notifyFollowers();
        cout << "Story posted successfully: " << content << endl;
    }

private:
    void compressVideo() {
        cout << "Compressing media..." << endl;
    }

    void uploadToServer() {
        cout << "Uploading to cloud database..." << endl;
    }

    void notifyFollowers() {
        cout << "Sending push notifications..." << endl;
    }
};

int main() {
    InstagramAccount myAccount("JohnDoe");

    myAccount.addFollower();
    cout << "Followers: " << myAccount.getFollowerCount() << endl;

    SocialMediaEngine* app = &myAccount;
    app->postContent("My Summer Vacation");

    return 0;
}