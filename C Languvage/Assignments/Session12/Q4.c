// Q4.Build a structure called InstaProfile with fields: username (string), followers (integer), and a nested structure Bio with fields: 
//description (string) and age (integer). Initialize an InstaProfile variable with your own details and display all fields.

#include <stdio.h>


struct Bio {
    char description[150];
    int age;
};

struct InstaProfile {
    char username[50];
    int followers;
    struct Bio profileBio; 
};

int main() {
   
    struct InstaProfile myProfile = {
        "Dhruv Prajapati",2000,
        {"Hello Everyone", 22} 
    };

   
    printf("--- Instagram Profile Details ---\n");
    printf("Username    : @%s\n", myProfile.username);
    printf("Followers   : %d\n", myProfile.followers);
    printf("Bio Desc    : %s\n", myProfile.profileBio.description);
    printf("Bio Age     : %d\n", myProfile.profileBio.age);
    printf("----------------------------------\n");

    return 0;
}
