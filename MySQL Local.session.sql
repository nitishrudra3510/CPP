CREATE TABLE if not EXISTS useres(
    id INT auto_increment Primary key,
    username varchar(255) not null,
    email varchar(255) not null
);


INSERT INTO useres (username, email) values
('john_name', 'john@example.com'),
('nitish_kumar', 'nitish@gmail.com'),
('rahul chand', 'rahulchand@gmail.com');

INSERT INTO useres ( username, email)
VALUES (
    'username:dipesh',
    'email:dipesh@example.com'
  );SELECT * FROM useres;



CREATE DATABASE CampusX  

DROP DATABASE CampusX

CREATE DATABASE IF NOT EXISTS CampusX


SHOW DATABASE;