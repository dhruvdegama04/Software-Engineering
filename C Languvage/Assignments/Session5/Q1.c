/*Q1.Create a simple IPL Fan Bot that takes your favorite IPL team name as 
input and uses if-else-if statements to print a unique cheer message for
 each team (e.g., 'Go Mumbai Indians!', 'Chennai Super Kings for the win!').
 If the team is not recognized, print 'Team not found!'*/
 
#include <stdio.h>
#include <string.h>

int main() {
    char team[10];

    printf("Welcome to IPL Fan Bot!\n");
    printf("Enter Team Code (MI, CSK, RCB, KKR): ");
    scanf("%s", team); 

    
    if (strcmp(team, "MI") == 0) {
        printf("Go Mumbai Indians! One Family!\n");
    } 
    else if (strcmp(team, "CSK") == 0) {
        printf("Chennai Super Kings for the win! Whistle Podu!\n");
    } 
    else if (strcmp(team, "RCB") == 0) {
        printf("Ee Sala Cup Namde! Play Bold, RCB!\n");
    } 
    else if (strcmp(team, "KKR") == 0) {
        printf("Korbo Lorbo Jeetbo Re! Ami KKR!\n");
    } 
    else {
        
        printf("Team not found!\n");
    }

    return 0;
}