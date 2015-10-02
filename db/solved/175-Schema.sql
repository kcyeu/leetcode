CREATE TABLE Person (
  PersonId INT,
  FirstName TEXT,
  LastName TEXT
);

CREATE TABLE Address (
  AddressId INT,
  PersonId INT,
  City TEXT,
  State TEXT
);

INSERT INTO Person (PersonID, FirstName, LastName)
VALUES (1, 'Jan', 'Doe'),
(2, 'Foo', 'Bar');

INSERT INTO Address (AddressId, PersonID, City, State)
VALUES (1, 1, 'San Francisco', 'CA');

