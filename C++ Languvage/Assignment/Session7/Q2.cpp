/*2.Read all song names from my_fav_songs.txt using ifstream and display each song on a new line in the console.*/

#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::ifstream file("my_fav_songs.txt");
    std::string song;

    if (file.is_open()) {
        while (std::getline(file, song)) {
            std::cout << song << "\n";
        }
        file.close();
    }

    return 0;
}