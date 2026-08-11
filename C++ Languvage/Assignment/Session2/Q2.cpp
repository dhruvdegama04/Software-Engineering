/*2.Add a member function to your Playlist class named togglePublic() that switches isPublic between true and false each time it is called.
Demonstrate by toggling the value twice and printing the result each time.*/

#include <iostream>
#include <string>

class Playlist 
{
    private:
        std::string name;
        bool isPublic;

    public:
        Playlist(std::string playlistName, bool initialPublicStatus = false) 
            : name(playlistName), isPublic(initialPublicStatus) {}

    void togglePublic() 
    {
        isPublic = !isPublic;
    }

    bool getIsPublic() const 
    {
        return isPublic;
    }

    void printStatus() const 
    {
        std::cout << "Playlist '" << name << "' is currently: " 
                  << (isPublic ? "Public" : "Private") << std::endl;
    }
};

int main() 
{
    Playlist myPlaylist("Favorites", false);
    myPlaylist.printStatus();

    myPlaylist.togglePublic();
    std::cout << "\n[Toggled Once]" << std::endl;
    myPlaylist.printStatus();

    myPlaylist.togglePublic();
    std::cout << "\n[Toggled Twice]" << std::endl;
    myPlaylist.printStatus();

    return 0;
} 