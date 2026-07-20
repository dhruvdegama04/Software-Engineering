// Q3.Define a nested structure called MovieShow for a BookMyShow-style app: Movie (string), Screen (integer), and a nested structure Time with hours and minutes (integers). Create and initialize a MovieShow variable for any movie and print its details in the format 'Movie: X, Screen: Y, Time: HH:MM'.

#include <stdio.h>

// Define the inner structure for Time
struct Time {
    int hours;
    int minutes;
};

// Define the nested outer structure for MovieShow
struct MovieShow {
    char movie[100];
    int screen;
    struct Time showTime; // Nested structure variable
};

int main() {
    // Initialize a MovieShow variable with movie details
    struct MovieShow currentShow = {
        "Inception",
        3,
        {18, 45} // Initializes hours as 18 and minutes as 45
    };

    // Print details in the format 'Movie: X, Screen: Y, Time: HH:MM'
    // %02d ensures that single digit hours/minutes are padded with a leading zero
    printf("Movie: %s, Screen: %d, Time: %02d:%02d\n", 
            currentShow.movie, 
            currentShow.screen, 
            currentShow.showTime.hours, 
            currentShow.showTime.minutes);

    return 0;
}
