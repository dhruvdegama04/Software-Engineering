/*Q3.Build a 'Guess the Song' game like Spotify — the program randomly 
picks a song name from a list and asks the user to guess it.
Use a do-while loop so the user can keep guessing until they 
get it right.<br><br><em><strong>Constraint:</strong> Use at least 3 
song names of your choice.</em>
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // 1. Array of songs (Constraint: 3 simple song names)
    // We kept names simple so typing them is easy
    char songs[3][20] = {"Kesariya", "Dynamite", "Believer"};
    
    // Seed for generating a random number
    srand(time(0)); 
    
    // Pick a random index between 0 and 2
    int randomIndex = rand() % 3; 
    
    // Variables for correct song and user's guess
    char correctSong[20];
    char userGuess[20];
    
    // Copy the randomly picked song into correctSong variable
    strcpy(correctSong, songs[randomIndex]);
    
    printf("========================================\n");
    printf("    Welcome to 'Guess the Song' Game!   \n");
    printf("========================================\n");
    printf("Hint: The song is one of these: Kesariya, Dynamite, Believer\n");
    printf("----------------------------------------\n");

    // 2. do-while loop: Keeps running until the user guesses correctly
    do {
        printf("Enter your guess (Case-Sensitive): ");
        scanf("%s", userGuess); // Takes user input (single word)

        // strcmp checks if both strings match. It returns 0 if they are equal.
        if (strcmp(userGuess, correctSong) == 0) {
            printf("\n?? Congratulations! You guessed it right: %s\n", correctSong);
        } else {
            printf("? Wrong guess! Try again.\n\n");
        }
        
    } while (strcmp(userGuess, correctSong) != 0); // Loop continues if guess is wrong

    return 0;
}
