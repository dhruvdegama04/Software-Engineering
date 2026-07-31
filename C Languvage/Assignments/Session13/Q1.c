//Q1.Create a file called playlist.txt and write the names of your top 3 favorite songs from Spotify into it using write mode (w).

#include <stdio.h>

int main() {
   
    FILE *file = fopen("playlist.txt", "w");

   
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
   
    fprintf(file, "Bohemian Rhapsody\n");
    fprintf(file, "Blinding Lights\n");
    fprintf(file, "Hotel California\n");

    fclose(file);

    printf("Successfully created playlist.txt and added 3 songs!\n");
    return 0;
}
