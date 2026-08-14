/*2.Build two classes, InstagramUploader and YouTubeUploader, each with a method uploadContent(). Both should extend a base class 
SocialMediaUploader and override uploadContent() to print a message showing how uploading works differently for Instagram and YouTube.*/

#include <iostream>

using namespace std;

class SocialMediaUploader {
public:
    virtual void uploadContent() {
        cout << "Uploading content to social media..." << endl;
    }
    virtual ~SocialMediaUploader() {}
};

class InstagramUploader : public SocialMediaUploader {
public:
    void uploadContent() override {
        cout << "Instagram: Uploading visual photo/video post with filters and tags." << endl;
    }
};

class YouTubeUploader : public SocialMediaUploader {
public:
    void uploadContent() override {
        cout << "YouTube: Uploading high-definition video with thumbnail, title, and description." << endl;
    }
};

int main() {
    SocialMediaUploader* insta = new InstagramUploader();
    SocialMediaUploader* yt = new YouTubeUploader();

    insta->uploadContent();
    yt->uploadContent();

    delete insta;
    delete yt;

    return 0;
}