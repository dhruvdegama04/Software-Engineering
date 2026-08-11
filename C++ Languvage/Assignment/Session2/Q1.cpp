/*1.Create a class called Playlist with properties: name (string), createdOn (date), and isPublic (boolean). Instantiate an object of
 Playlist and print all its properties.*/

#include <iostream>
#include <string>

class Playlist 
{
    public:
        std::string name;
        std::string createdOn;
        bool isPublic;

    Playlist(std::string playlistName, std::string dateCreated, bool publicStatus) 
    : name(playlistName), createdOn(dateCreated), isPublic(publicStatus) {}

    void displayInfo() const 
    {
        std::cout << "--- Playlist Information ---" << std::endl;
        std::cout << "Name          :   " << name << std::endl;
        std::cout << "Created On    :   " << createdOn << std::endl;
        std::cout << "Visibility    :   " << (isPublic ? "Public" : "Private") << std::endl;
    }
};

int main() 
{
    Playlist myPlaylist("Chill Hits 2026", "2026-08-11", true);

    myPlaylist.displayInfo();

    return 0;
}