// Q4.Given a 2D array called cricketScores where each row represents an IPL match and columns 
// represent runs scored by each team, write code to print the highest score from each match.

#include <stdio.h>

int main() {
    // 1. Create a 2D array called cricketScores
    // Rows = Matches (e.g., 4 matches)
    // Columns = Runs scored by each team (2 teams per match)
    int cricketScores[4][2] = {
        {185, 182}, // Match 1: Team A scored 185, Team B scored 182
        {210, 215}, // Match 2: Team A scored 210, Team B scored 215
        {160, 145}, // Match 3: Team A scored 160, Team B scored 145
        {245, 250}  // Match 4: Team A scored 245, Team B scored 250
    };

    int i,totalMatches = 4;

    printf("Highest score from each IPL match:\n");
    printf("----------------------------------\n");

    // 2. Loop through each match (row)
    for ( i = 0; i < totalMatches; i++) {
        // Assume the first team's score is the highest initially
        int highestScore = cricketScores[i][0];

        // Compare with the second team's score
        if (cricketScores[i][1] > highestScore) {
            highestScore = cricketScores[i][1];
        }

        // Print the result for the current match
        printf("Match %d Highest Score: %d\n", i + 1, highestScore);
    }

    return 0;
}
