// Q4.Write a program that reads all song names from playlist.txt and prints only those that contain the word 'love' (case-insensitive).<br><br><em><strong>Hint:</strong> Use the 'in' keyword or equivalent string method for filtering.</em>

#include <stdio.h>
#include <string.h>
#include <ctype.h>


void toLowerCase(char *str) {
    for (int i = 0; str[i]; i++) {
        str[i] = tolower((unsigned char)str[i]);
    }
}

int main() {
   
    FILE *file = fopen("playlist.txt", "r");
   
    if (file == NULL) {
        printf("Error: Could not open playlist.txt. Make sure the file exists!\n");
        return 1;
    }

    char originalSong[100];
    char lowercasedSong[100];
    int found = 0;

    printf("--- Songs containing 'love' ---\n");
   
    while (fgets(originalSong, sizeof(originalSong), file) != NULL) {
               
        strcpy(lowercasedSong, originalSong);
        toLowerCase(lowercasedSong);
    
        if (strstr(lowercasedSong, "love") != NULL) {
           
            printf("- %s", originalSong);
            found = 1;
        }
    }

    if (!found) {
        printf("No songs matching 'love' were found in your playlist.\n");
    }
    
    fclose(file);

    return 0;
}
