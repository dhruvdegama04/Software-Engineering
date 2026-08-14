/*1.Create a class called Song in your preferred OOP language with private properties title and artist. Add public getter and setter methods
 to access and modify these properties, then create an object and update its title.*/

 #include <iostream>
#include <string>

using namespace std;

class Song {
private:
    string title;
    string artist;

public:
    Song(const string& t = "", const string& a = "") 
        : title(t), artist(a) {}

    string getTitle() const {
        return title;
    }

    void setTitle(const string& t) {
        title = t;
    }

    string getArtist() const {
        return artist;
    }

    void setArtist(const string& a) {
        artist = a;
    }
};

int main() {
    Song song("Bohemian Rhapsody", "Queen");
    
    song.setTitle("Don't Stop Me Now");

    cout << "Title: " << song.getTitle() << endl;
    cout << "Artist: " << song.getArtist() << endl;

    return 0;
}