--1.Install MySQL Workbench on your computer, connect to the local MySQL server, 
--and take a screenshot of the default databases shown in the Schemas panel.


1.Download and Install MySQL Workbench:
Prerequisite

    Download the installer from the official MySQL website. 
    Run the installer and select the standard setup options 
    to install both MySQL Server and MySQL Workbench.

2.Connect to Local MySQL Instance:
Connection Setup

    Open MySQL Workbench. On the main home screen, click on Local Instance 3306 
    (or click the + icon next to "MySQL Connections" using Hostname: 
    127.0.0.1 and Port: 3306). Enter the root password you created during installation.

3.View Schemas Panel:
Verification

    Once connected, locate the Navigator sidebar on the left side of the window 
    and click on the Schemas tab at the bottom of the Navigator section.

Default System Databases

When connected to a fresh MySQL installation, the standard system databases in the Schemas list include:

    sys: Views, procedures, and functions to help optimize and monitor performance.

    sakila / world (optional): Sample databases frequently included during installation for practice.

    mysql & information_schema (hidden by default): Store core server operational metadata and system configuration details.


--2.Create a new database called InstaClone in MySQL Workbench, 
then create a table named Users with columns: user_id (INT, primary key), 
username (VARCHAR), email (VARCHAR), and followers_count (INT).

CREATE DATABASE InstaClone;

USE InstaClone;

CREATE TABLE Users (
    user_id INT PRIMARY KEY AUTO_INCREMENT,
    username VARCHAR(50) NOT NULL UNIQUE,
    email VARCHAR(100) NOT NULL UNIQUE,
    followers_count INT DEFAULT 0
);

--3.Insert 3 sample users into the Users table you created, 
using realistic Instagram-style usernames and follower counts.

INSERT INTO Users (user_id, username, email, followers_count)
VALUES 
    (1, 'pixel_wanderer', 'alex.travels@gmail.com', 12450),
    (2, 'matcha_and_mugs', 'sarah.coffee@yahoo.com', 890),
    (3, 'tech_disruptor', 'dev.marcus@outlook.com', 342000);
    
--4.Create another table in the InstaClone database called Posts with columns: 
post_id (INT, primary key), user_id (INT), caption (VARCHAR), and post_date (DATE). 
Add a foreign key from Posts.user_id to Users.user_id to establish a relationship.

USE InstaClone;

CREATE TABLE Posts (
    post_id INT PRIMARY KEY AUTO_INCREMENT,
    user_id INT NOT NULL,
    caption VARCHAR(2200),
    post_date DATE NOT NULL,
    FOREIGN KEY (user_id) REFERENCES Users(user_id)
);

--5.Write a short comparison (3-4 lines each) of MySQL, PostgreSQL, Oracle, and SQLite, 
--focusing on where each one is commonly used (for example: web apps, mobile apps, 
--enterprise systems, etc.).

MySQL

    Widely used in web development, content management systems (like WordPress), 
    and e-commerce platforms. It is the go-to open-source database for popular web 
    stacks (such as LAMP/LEMP) due to its simplicity, reliable read performance, 
    and strong community support.

PostgreSQL

    The preferred choice for complex web applications, data analytics, 
    geographic/GIS applications, and financial services. 
    It is renowned for its strict standards compliance, advanced data types, 
    extensible architecture, and robust support for complex queries.

SQLite

    Ideal for mobile apps (iOS and Android), desktop applications, embedded IoT devices, 
    and local testing environments. Unlike traditional client-server databases, 
    it operates as a lightweight, zero-configuration file stored directly on 
    the host device.

Oracle Database

    Dominates large enterprise systems, banking, healthcare, and mission-critical 
    corporate infrastructures. It offers high availability, enterprise-grade security, 
    extreme scalability, and extensive support for massive transactional workloads.