/*2.Build a class called InstaStory with a protected property storyViews. Create a subclass called SponsoredStory that can access and
 display the storyViews value.*/

 #include <iostream>

class InstaStory {
protected:
    int storyViews;

public:
    InstaStory(int views = 0) : storyViews(views) {}

    void setStoryViews(int views) {
        storyViews = views;
    }

    int getStoryViews() const {
        return storyViews;
    }
};

class SponsoredStory : public InstaStory {
public:
    SponsoredStory(int views = 0) : InstaStory(views) {}

    void displayViews() const {
        std::cout << "Story Views: " << storyViews << std::endl;
    }
};

int main() {
    SponsoredStory promo(1250);
    promo.displayViews();

    return 0;
}