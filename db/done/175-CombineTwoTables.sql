SELECT t1.FirstName, t1.LastName, t2.City, t2.State
FROM Person as t1
LEFT JOIN Address as t2 on t1.PersonId = t2.PersonId
