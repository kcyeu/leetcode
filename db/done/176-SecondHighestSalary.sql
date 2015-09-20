SELECT max(Salary) as SecondHighestSalary
FROM
(SELECT DISTINCT Salary from Employee
ORDER BY Salary DESC
LIMIT 1,1) as t;

