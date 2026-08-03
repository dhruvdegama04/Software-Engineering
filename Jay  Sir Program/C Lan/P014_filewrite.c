#include <stdio.h>
#include <stdlib.h>

void main() {
    
    // File pointer
    FILE* fptr;

    // Get the data to be written in file
    char data[50] = "Hi folks we are learning file handling in C lang";

    // Creating file using fopen()
    // with access mode "w"
    fptr = fopen("file.txt", "w");

    // Checking if the file is created
    if (fptr == NULL) 
        printf("The file is not opened.");
    else{
        printf("The file is now opened.\n");
        fputs(data, fptr);
        fputs("\n", fptr);

        // Closing the file using fclose()
        fclose(fptr);
        printf("Data successfully written in file "
               "file.txt\n");
        printf("The file is now closed.");
    }
   
}