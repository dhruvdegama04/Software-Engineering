1.Create a table called Restaurant with columns: id, name, location, and cuisine. 
Apply NOT NULL constraint to name and location, and make id the PRIMARY KEY.

CREATE TABLE Restaurant (
    id INT PRIMARY KEY,
    name VARCHAR(255) NOT NULL,
    location VARCHAR(255) NOT NULL,
    cuisine VARCHAR(100)
);


2.Create a table called FoodOrder with columns: order_id, restaurant_id, user_id, 
and order_total. Set order_id as PRIMARY KEY, and add a FOREIGN KEY constraint on 
restaurant_id referencing Restaurant(id).

CREATE TABLE FoodOrder (
    order_id INT PRIMARY KEY,
    restaurant_id INT,
    user_id INT,
    order_total DECIMAL(10, 2),
    FOREIGN KEY (restaurant_id) REFERENCES Restaurant(id)
);


3.Insert 6 rows into a table called SpotifyUser with columns: user_id, username, 
email, and subscription_type. Ensure that username is UNIQUE and email is NOT NULL.
<br><br><em><strong>Hint:</strong> Use the UNIQUE and NOT NULL constraints when 
creating the table.</em>

CREATE TABLE SpotifyUser (
    user_id INT PRIMARY KEY,
    username VARCHAR(50) UNIQUE,
    email VARCHAR(100) NOT NULL,
    subscription_type VARCHAR(20)
);

INSERT INTO SpotifyUser (user_id, username, email, subscription_type) VALUES
(1, 'melodic_mind', 'alex.m@example.com', 'Premium'),
(2, 'beat_drop99', 'beat.drop@example.com', 'Free'),
(3, 'audio_phile', 'sarah.c@example.com', 'Family'),
(4, 'retro_vibes', 'retro.fan@example.com', 'Student'),
(5, 'daily_streamer', 'jordan.p@example.com', 'Free'),
(6, 'indie_listener', 'sam.w@example.com', 'Premium');


4.Create a VIEW named TopSpendersView that shows usernames and order_total 
from a FoodOrder table where order_total is greater than 1000.

CREATE VIEW TopSpendersView AS
SELECT u.username, o.order_total
FROM FoodOrder o
JOIN SpotifyUser u ON o.user_id = u.user_id
WHERE o.order_total > 1000;