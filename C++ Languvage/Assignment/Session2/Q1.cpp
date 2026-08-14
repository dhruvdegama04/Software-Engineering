/*1.Create a class called Playlist with properties: name (string), createdOn (date), and isPublic (boolean). Instantiate an object of
 Playlist and print all its properties.*/

#include <iostream>
#include <string>

using namespace std;

class Playlist 
{
    public:
        string name;
        string createdOn;
        bool isPublic;

    Playlist(std::string playlistName, std::string dateCreated, bool publicStatus) 
    : name(playlistName), createdOn(dateCreated), isPublic(publicStatus) {}

    void displayInfo() const 
    {
        cout << "--- Playlist Information ---" << endl;
        cout << "Name          :   " << name << endl;
        cout << "Created On    :   " << createdOn << endl;
        cout << "Visibility    :   " << (isPublic ? "Public" : "Private") << endl;
    }
};

int main() 
{
    Playlist myPlaylist("Chill Hits 2026", "2026-08-11", true);

    myPlaylist.displayInfo();

    return 0;
}