// Q3.Add two more song names to playlist.txt without deleting the existing ones by opening the file in append mode (a).

#include <stdio.h>

int main() {
    
    FILE *file = fopen("playlist.txt", "a");
  
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    
    fprintf(file, "Stayin' Alive\n");
    fprintf(file, "Shape of You\n");
 
    fclose(file);

    printf("Successfully appended 2 more songs to playlist.txt!\n");
    return 0;
}
