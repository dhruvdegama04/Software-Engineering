//Q3.Write a program that stores your favorite Spotify playlist's name (string),total number of songs (int), and average song duration in minutes (float).Print all values in a single formatted sentence.
#include<stdio.h>

int main() {
    // 1. Variable Declaration & Initialization
    char playlistName[] = "My Like Song "; // String (character array)
    int totalSongs = 45;                       // Integer for whole numbers
    float avgDuration = 6.00f;                 // Float for decimal values

    // 2. Print all values in a single formatted sentence
    printf("My favorite Spotify playlist is \"%s\", which contains %d songs with an average song duration of %.2f minutes.\n", 
           playlistName, totalSongs, avgDuration);

    return 0;
}   