/*4.Given this code: class MusicPlayer { void play(String song) { System.out.println("Playing: " + song); } } class SpotifyPlayer extends 
MusicPlayer { void play(String song) { System.out.println("Streaming on Spotify: " + song); } } — Create an object of type MusicPlayer but 
assign it a SpotifyPlayer instance, then call play(). Explain the output.<br><br><em><strong>Hint:</strong> This tests runtime polymorphism 
(overriding) and dynamic method dispatch.</em>*/

#include <iostream>
#include <string>

using namespace std;

class MusicPlayer {
public:
    virtual void play(string song) {
        cout << "Playing: " << song << endl;
    }
    virtual ~MusicPlayer() {}
};

class SpotifyPlayer : public MusicPlayer {
public:
    void play(string song) override {
        cout << "Streaming on Spotify: " << song << endl;
    }
};

int main() {
    MusicPlayer* player = new SpotifyPlayer();
    player->play("Bohemian Rhapsody");

    delete player;
    return 0;
}