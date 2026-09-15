1.Create a MySQL table called playlists to store Spotify-style music playlists, 
with columns: playlist_id (primary key), user_id (foreign key), name (varchar), 
and created_at (datetime). Write the CREATE TABLE statement.

    CREATE TABLE playlists (
        playlist_id INT AUTO_INCREMENT PRIMARY KEY,
        user_id INT NOT NULL,
        name VARCHAR(255) NOT NULL,
        created_at DATETIME DEFAULT CURRENT_TIMESTAMP
    );

2.Insert three sample records into the playlists table: one for a user with a 
'Workout Mix', one with a 'Chill Vibes', and one with a 'Top Hits' playlist. Use 
realistic data for each field.

    INSERT INTO playlists (user_id, name, created_at) 
    VALUES 
        (101, 'Workout Mix', '2026-01-15 08:30:00'),
        (101, 'Chill Vibes', '2026-02-10 19:45:00'),
        (102, 'Top Hits', '2026-03-01 12:00:00');

3.Write an SQL UPDATE statement to rename the 'Chill Vibes' playlist to 'Evening Chill' 
for a specific user_id.

    UPDATE playlists 
    SET name = 'Evening Chill' 
    WHERE name = 'Chill Vibes' 
    AND user_id = 101;

4.Write a DELETE statement to remove a playlist named 'Workout Mix' for a given user_id 
from the playlists table.<br><br><em><strong>Hint:</strong> Make sure your WHERE clause 
targets only the intended row.</em>

    DELETE FROM playlists 
    WHERE name = 'Workout Mix' 
    AND user_id = 101;

5.Create a stored procedure named GetMonthlyPlaylistCount that takes a user_id and a 
month (as an integer) as input, and returns the total number of playlists the user 
created in that month.<br><br><em><strong>Hint:</strong> Use the MONTH() function in 
your WHERE clause.</em>


    DELIMITER //

    CREATE PROCEDURE GetMonthlyPlaylistCount(
        IN p_user_id INT,
        IN p_month INT,
        OUT p_total_count INT
    )
    BEGIN
        SELECT COUNT(*) 
        INTO p_total_count
        FROM playlists
        WHERE user_id = p_user_id 
        AND MONTH(created_at) = p_month;
    END //

    DELIMITER ;