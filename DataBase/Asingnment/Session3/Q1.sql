1.Create a SQL table called Restaurants with columns: id (INT, auto-increment), 
name (VARCHAR), cuisine (VARCHAR), rating (DECIMAL), and city (VARCHAR). 
Insert 5 sample restaurants into the table, each with a different cuisine and rating.

CREATE TABLE Restaurants (
    id INT AUTO_INCREMENT PRIMARY KEY,
    name VARCHAR(255) NOT NULL,
    cuisine VARCHAR(100) NOT NULL,
    rating DECIMAL(3, 2),
    city VARCHAR(100) NOT NULL
);

INSERT INTO Restaurants (name, cuisine, rating, city) 
VALUES 
    ('Trattoria Bella', 'Italian', 4.7, 'Chicago'),
    ('Sakura Sushi', 'Japanese', 4.9, 'Seattle'),
    ('El Mariachi', 'Mexican', 4.3, 'Austin'),
    ('Taj Mahal Palace', 'Indian', 4.6, 'New York'),
    ('Le Petit Bistro', 'French', 4.8, 'San Francisco');


2.Write a SQL UPDATE statement to change the rating of the restaurant named 
'Spice Villa' to 4.7 in the Restaurants table.

UPDATE Restaurants SET rating = 4.7 WHERE name = 'Spice Villa';


3.Delete all restaurants from the Restaurants table where the rating is less than 
3.5 using a SQL DELETE statement.

DELETE FROM Restaurants WHERE rating < 3.5;


4.Use a SELECT query with WHERE and LIMIT to fetch the top 2 restaurants in 
the city 'Ahmedabad' with a rating above 4.0 from the Restaurants table.
<br><br><em><strong>Hint:</strong> Combine WHERE for city and rating, 
and LIMIT to restrict the number of results.</em>

SELECT * FROM Restaurants WHERE city = 'Ahmedabad' AND rating > 4.0 ORDER BY rating DESC LIMIT 2;