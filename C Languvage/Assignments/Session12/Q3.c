// Q3.Define a nested structure called MovieShow for a BookMyShow-style app: Movie (string), Screen (integer), and a nested structure Time with hours and minutes (integers). Create and initialize a MovieShow variable for any movie and print its details in the format 'Movie: X, Screen: Y, Time: HH:MM'.

#include <stdio.h>


struct Time {
    int hours;
    int minutes;
};


struct MovieShow {
    char movie[100];
    int screen;
    struct Time showTime; 
};

int main() {
    
    struct MovieShow currentShow = {
        "Inception",3,
        {18, 45} 
    };

    
    printf("Movie: %s, Screen: %d, Time: %02d:%02d\n", 
            currentShow.movie, 
            currentShow.screen, 
            currentShow.showTime.hours, 
            currentShow.showTime.minutes);

    return 0;
}
