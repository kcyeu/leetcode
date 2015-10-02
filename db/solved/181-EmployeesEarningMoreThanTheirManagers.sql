SELECT t1.Name as Employee from Employee as t1
INNER JOIN Employee as t2 on t1.ManagerId = t2.Id
WHERE t1.Salary > t2.Salary

