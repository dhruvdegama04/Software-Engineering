/*1.Create a text file called my_fav_songs.txt and write the names of your 5 favorite songs into it using ofstream.*/

#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ofstream file("my_fav_songs.txt");

    file << "Bohemian Rhapsody" << endl;
    file << "Hotel California" << endl;
    file << "Imagine" << endl;
    file << "Stairway to Heaven" << endl;
    file << "Sweet Child O' Mine" << endl;

    file.close();

    return 0;
}