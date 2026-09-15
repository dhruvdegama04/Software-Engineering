1.Create a table called Playlist with columns: id, song_name, artist, genre, 
and play_count. Insert at least 5 sample records representing your favorite songs 
from Spotify.

CREATE TABLE Playlist (
    id INT AUTO_INCREMENT PRIMARY KEY,
    song_name VARCHAR(255) NOT NULL,
    artist VARCHAR(255) NOT NULL,
    genre VARCHAR(100) NOT NULL,
    play_count INT DEFAULT 0
);

INSERT INTO Playlist (song_name, artist, genre, play_count)
VALUES 
    ('Blinding Lights', 'The Weeknd', 'Synthpop', 3420000000),
    ('Bohemian Rhapsody', 'Queen', 'Classic Rock', 2200000000),
    ('As It Was', 'Harry Styles', 'Indie Pop', 3100000000),
    ('Starboy', 'The Weeknd', 'R&B / Electropop', 2900000000),
    ('Shape of You', 'Ed Sheeran', 'Pop', 3800000000);


2.Write a SELECT query to display only the song_name and artist from the Playlist table, 
but show the artist column as 'Singer' using an alias.

SELECT song_name, artist AS Singer FROM Playlist;


3.Write a SELECT query to find all songs in the Playlist table where the genre is 
'Pop' and play_count is greater than 100. Sort the results by play_count in descending order.

SELECT * FROM Playlist WHERE genre = 'Pop' AND play_count > 100 ORDER BY play_count DESC;


4.Use the COUNT aggregate function to find out how many songs in your Playlist 
table belong to the genre 'Hip-Hop'.

SELECT COUNT(*) AS HipHopSongCount FROM Playlist WHERE Genre = 'Hip-Hop';


5.Write a SELECT query that shows the total number of plays (SUM of play_count) 
for each genre in your Playlist table, grouped by genre.<br><br><em><strong>Hint:
</strong> Use GROUP BY with the SUM function to aggregate play counts by genre.</em>

SELECT Genre, SUM(play_count) AS TotalPlays FROM Playlist GROUP BY Genre;