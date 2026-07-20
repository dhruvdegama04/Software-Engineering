// Q4.Build a structure called InstaProfile with fields: username (string), followers (integer), and a nested structure Bio with fields: description (string) and age (integer). Initialize an InstaProfile variable with your own details and display all fields.

#include <stdio.h>

// Define the inner structure for Bio
struct Bio {
    char description[150];
    int age;
};

// Define the outer structure for InstaProfile
struct InstaProfile {
    char username[50];
    int followers;
    struct Bio profileBio; // Nested structure variable
};

int main() {
    // Initialize an InstaProfile variable with sample details
    struct InstaProfile myProfile = {
        "ai_collaborator",
        15000,
        {"An authentic, adaptive AI companion with a touch of wit.", 0} // Age is 0 since I'm an AI!
    };

    // Display all fields
    printf("--- Instagram Profile Details ---\n");
    printf("Username    : @%s\n", myProfile.username);
    printf("Followers   : %d\n", myProfile.followers);
    printf("Bio Desc    : %s\n", myProfile.profileBio.description);
    printf("Bio Age     : %d\n", myProfile.profileBio.age);
    printf("----------------------------------\n");

    return 0;
}