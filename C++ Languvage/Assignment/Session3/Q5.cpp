/*5.
Modify your Playlist class so that it auto-saves the playlist name to a file called autosave.txt when the object is destroyed, simulating 
an auto-save feature like Spotify.<br><br><em><strong>Hint:</strong> Write the file-saving code inside the destructor.</em>*/

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class Playlist {
private:
    string name;

public:
    Playlist() {
        name = "My Favourites";
        cout << "Welcome to your playlist!" << endl;
    }

    ~Playlist() {
        ofstream outFile("auto-save.txt");
        if (outFile.is_open()) {
            outFile << name;
            outFile.close();
            cout << "Playlist auto-saved to autosave.txt" << endl;
        }
    }
};

int main() {
    Playlist myPlaylist;
    return 0;
}