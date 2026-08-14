/*2.Add a member function to your Playlist class named togglePublic() that switches isPublic between true and false each time it is called.
Demonstrate by toggling the value twice and printing the result each time.*/

#include <iostream>
#include <string>

using namespace std;

class Playlist 
{
    private:
        string name;
        bool isPublic;

    public:
        Playlist(string playlistName, bool initialPublicStatus = false) 
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
        cout << "Playlist '" << name << "' is currently: " 
                  << (isPublic ? "Public" : "Private") <<endl;
    }
};

int main() 
{
    Playlist myPlaylist("Favorites", false);
    myPlaylist.printStatus();

    myPlaylist.togglePublic();
    cout << "\n[Toggled Once]" <<endl;
    myPlaylist.printStatus();

    myPlaylist.togglePublic();
    cout << "\n[Toggled Twice]" <<endl;
    myPlaylist.printStatus();

    return 0;
} 