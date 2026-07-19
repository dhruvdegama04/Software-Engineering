
/*Q4.Given three variables: likes, comments, and shares (all numbers), 
write code to check if a post is 'trending' on Instagram 
(at least 1000 likes OR more than 200 comments AND at least 50 shares). 
Print the result.
*/
#include<stdio.h>
int main() {
    int likes = 800; //1k more then like to trending post or not
    int comments = 250;
    int shares = 55;

    // Condition logic checking using relational and logical operators
    bool isTrending = (likes >= 1000 && comments > 200) && shares >= 50;

    if (isTrending) {
        printf("The post is trending!\n");
    } else {
        printf("The post is not trending.\n");
    }

    return 0;
}