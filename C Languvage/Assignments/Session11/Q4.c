// Q4.Create a function incrementFollowers(int *followers, int n) that increases each follower count in an array (representing Instagram followers for 5 friends) by 100 using pointer arithmetic, then print the updated counts.

#include <stdio.h>


void incrementFollowers(int *followers, int n) {
	int i;
    for ( i = 0; i < n; i++) {
    
        *(followers + i) += 100; 
    }
}

int main() {
    
    int instagramFollowers[5] = {250, 480, 1200, 75, 310};
    int n = 5,i;

    printf("--- Original Follower Counts ---\n");
    for ( i = 0; i < n; i++) {
        printf("Friend %d: %d followers\n", i + 1, instagramFollowers[i]);
    }

    
    incrementFollowers(instagramFollowers, n);

    printf("\n--- Updated Follower Counts (After +100) ---\n");
    for ( i = 0; i < n; i++) {
        printf("Friend %d: %d followers\n", i + 1, instagramFollowers[i]);
    }

    return 0;
}
