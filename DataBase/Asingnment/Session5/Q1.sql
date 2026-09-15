1.Create two tables in SQL: influencers (with influencer_id as PRIMARY KEY and name) 
and posts (with post_id as PRIMARY KEY, influencer_id as FOREIGN KEY, and caption). 
Insert at least 3 influencers and 2 posts for each influencer.

CREATE TABLE influencers (
    influencer_id INT PRIMARY KEY,
    name VARCHAR(100) NOT NULL
);

CREATE TABLE posts (
    post_id INT PRIMARY KEY,
    influencer_id INT,
    caption VARCHAR(255),
    FOREIGN KEY (influencer_id) REFERENCES influencers(influencer_id) ON DELETE CASCADE
);

INSERT INTO influencers (influencer_id, name) VALUES
(1, 'Alex Rivera'),
(2, 'Sophia Chen'),
(3, 'Marcus Vance');

INSERT INTO posts (post_id, influencer_id, caption) VALUES

(101, 1, 'Morning coffee and coding vibes ☕💻'),
(102, 1, 'Weekend hike at Yosemite! 🏔️'),

(103, 2, 'Top 5 skincare tips for this autumn 🍁✨'),
(104, 2, 'Unboxing the new camera rig setup! 📷'),

(105, 3, 'Leg day complete. No excuses! 🏋️‍♂️'),
(106, 3, 'Meal prep Sunday: Fueling up for the week 🥗');


2.Write an SQL query using INNER JOIN to display each post
's caption along with the name of the influencer who posted it, 
based on the tables you created.'

SELECT p.caption, i.name AS influencer_name FROM posts p INNER JOIN influencers i ON p.influencer_id = i.influencer_id;


3.Write an SQL query using LEFT JOIN to show all influencers and their posts, 
including influencers who haven't posted anything yet. If an influencer has no posts, 
display 'No Posts in the caption column.<br><br><em><strong>Hint:</strong> Use IFNULL
or COALESCE to handle NULL values in the result.</em>

SELECT i.name AS influencer_name, COALESCE(p.caption, 'No Posts') AS caption FROM influencers i LEFT JOIN posts p ON i.influencer_id = p.influencer_id;


4.Write an SQL query using RIGHT JOIN to list all posts and the corresponding 
influencer's name, ensuring that even posts without a matching influencer_id 
(if any) are shown.'

SELECT p.post_id, p.caption, i.name AS influencer_name FROM influencers i RIGHT JOIN posts p ON i.influencer_id = p.influencer_id;