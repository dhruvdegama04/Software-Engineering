/*4.Extend your Playlist class to include a member function addSong(songTitle) that adds the song title to an array property called songs. 
Demonstrate by adding three song titles and displaying the updated songs list.<br><br><em><strong>Hint:</strong> Initialize songs as an 
empty array inside the constructor.</em>*/

#include <iostream>
#include <vector>
#include <string>

class Playlist 
{
    public:
        std::vector<std::string> songs;

    Playlist() 
    {
        songs = {};
    }

    void addSong(std::string songTitle) 
    {
        songs.push_back(songTitle);
    }

    void displaySongs() 
    {
        for (const std::string& song : songs) 
        {
            std::cout << song << std::endl;
        }
    }
};

int main() 
{
    Playlist myPlaylist;

    myPlaylist.addSong("Bohemian Rhapsody");
    myPlaylist.addSong("Hotel California");
    myPlaylist.addSong("Imagine");

    myPlaylist.displaySongs();

    return 0;
}