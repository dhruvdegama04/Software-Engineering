// Q2.Open playlist.txt in read mode (r) and display each song name on a separate line in the console.

#include <stdio.h>

int main() {
   
    FILE *file = fopen("playlist.txt", "r");
   
    if (file == NULL) {
        printf("Error: Could not open playlist.txt. Make sure the file exists!\n");
        return 1;
    }
    
    char song[100];

    printf("--- My Spotify Playlist ---\n");

    while (fgets(song, sizeof(song), file) != NULL) {
        
        printf("%s", song);
    }

    fclose(file);

    return 0;
}
