/*3.Modify your code to append a new song name entered by the user to my_fav_songs.txt without overwriting the existing list.<br><br>
<em><strong>Hint:</strong> Open the file in append mode using ofstream.</em>*/

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    string newSong;
    cout << "Enter a song name to append: ";
    getline(cin, newSong);

    ofstream file("my_fav_songs.txt", ios::app);

    if (file.is_open()) {
        file << newSong << "\n";
        file.close();
    }

    return 0;
}