
SELECT t1.Name as Customers
FROM Customers as t1
LEFT JOIN Orders as t2 on t1.Id = t2.CustomerId
WHERE t2.CustomerId IS NULL
