/*Q2.Create a 2D array called playlistRatings to store ratings for 3 Spotify playlists over 5 days
 (rows = playlists, columns = days). Fill it with sample numbers and print the ratings for the
 second playlist.*/

int main() {
    // 1. Create a 2D array called playlistRatings 
    // Rows = 3 playlists, Columns = 5 days
    int j,playlistRatings[3][5] = {
        {4, 5, 4, 3, 5}, // Playlist 1 ratings over 5 days
        {5, 4, 5, 5, 4}, // Playlist 2 ratings over 5 days (Index 1)
        {3, 3, 4, 4, 3}  // Playlist 3 ratings over 5 days
    };

    // 2. Print the ratings for the second playlist
    // The second playlist is at row index 1 (since C arrays are 0-indexed)
    printf("Ratings for the second Spotify playlist over 5 days:\n");
    for ( j = 0; j < 5; j++) {
        printf("Day %d: %d stars\n", j + 1, playlistRatings[1][j]);
    }

    return 0;
}
