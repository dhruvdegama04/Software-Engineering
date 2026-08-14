/*3.Create a class Movie with a parameterized constructor and then use a copy constructor to duplicate a Movie object. Print both the 
original and copied movie details to show they are identical.*/

#include <iostream>
#include <string>

using namespace std;

class Movie {
private:
    string title;
    string director;
    int releaseYear;

public:
    Movie(string t, string d, int y) {
        title = t;
        director = d;
        releaseYear = y;
    }

    Movie(const Movie &m) {
        title = m.title;
        director = m.director;
        releaseYear = m.releaseYear;
    }

    void displayDetails() {
        cout << "Title: " << title <<endl;
        cout << "Director: " << director <<endl;
        cout << "Release Year: " << releaseYear <<endl;
        cout << "--------------------" <<endl;
    }
};

int main() {
    Movie originalMovie("Inception", "Christopher Nolan", 2010);
    Movie copiedMovie = originalMovie;

    cout << "Original Movie Details:" <<endl;
    originalMovie.displayDetails();

    cout << "Copied Movie Details:" <<endl;
    copiedMovie.displayDetails();

    return 0;
}