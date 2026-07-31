// Q3.Write a function formatFollowersCount(count) that takes a number and returns a formatted string like Instagram: 1500 as '1.5K', 1200000 as '1.2M', and numbers below 1000 as-is. Add clear comments and use proper indentation.

#include <stdio.h>


void formatFollowersCount(long long count, char *result) {
    
    
    if (count >= 1000000) {
        
        if (count % 1000000 == 0) {
            sprintf(result, "%lldM", count / 1000000);
        } else {
            
            sprintf(result, "%.1fM", (double)count / 1000000.0);
        }
    }
    
    else if (count >= 1000) {
       
        if (count % 1000 == 0) {
            sprintf(result, "%lldK", count / 1000);
        } else {
           
            sprintf(result, "%.1fK", (double)count / 1000.0);
        }
    }
    
    else {
        sprintf(result, "%lld", count);
    }
}

int main() {
    
    char formattedText[50];

   
    formatFollowersCount(735, formattedText);
    printf("Followers: %s\n", formattedText); 

 
    formatFollowersCount(1500, formattedText);
    printf("Followers: %s\n", formattedText); 

  
    formatFollowersCount(1200000, formattedText);
    printf("Followers: %s\n", formattedText); 

    
    formatFollowersCount(5000, formattedText);
    printf("Followers: %s\n", formattedText); 

    return 0;
}
