CREATE TABLE Employee (
  Id INT,
  Name TEXT,
  Salary INT,
  ManagerId INT
);

INSERT INTO Employee (Id, Name, Salary, ManagerId)
VALUES (1, 'JOE', 70000, 3),
(2, 'Henry', 80000, 4),
(3, 'Sam', 60000, NULL),
(4, 'Max', 90000, NULL);

