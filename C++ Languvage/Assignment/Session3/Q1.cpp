/*1.Create a class called Playlist with a default constructor that sets the playlist name to 'My Favourites' and prints a welcome message 
when an object is created.*/

#include <iostream>
#include <string>

using namespace std;

class Playlist 
{
    private:
    string name;

    public:
        Playlist() 
        {
            name = "My Favourites";
            cout << "Welcome to your playlist!" << endl;
        }
};

int main() 
{
    Playlist myPlaylist;
    return 0;
}