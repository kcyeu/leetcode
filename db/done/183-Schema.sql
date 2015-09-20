CREATE TABLE Customers  (
  Id INT,
  Name TEXT
);

CREATE TABLE Orders (
  Id INT,
  CustomerId INT
);

INSERT INTO Customers (Id, Name)
VALUES (1, 'Joe'),
(2, 'Henry'),
(3, 'Sam'),
(4, 'Max');

INSERT INTO Orders (Id, CustomerId)
VALUES (1, 3),(2,1),(3,3);


