// Q1.Declare a structure named Playlist to store details of a song: title (string), artist (string), and duration in seconds (integer). 
//Initialize one Playlist variable with your favorite song's details and print each field.

#include <stdio.h>


struct Playlist {
    char title[100];
    char artist[100];
    int duration;
};

int main() {
    
    struct Playlist myFavoriteSong = {
        "Bohemian Rhapsody",
        "Queen",
        355
    };

   
    printf("--- Favorite Song Details ---\n");
    printf("Title    : %s\n", myFavoriteSong.title);
    printf("Artist   : %s\n", myFavoriteSong.artist);
    printf("Duration : %d seconds\n", myFavoriteSong.duration);

    return 0;
}
