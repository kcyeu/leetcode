SELECT t1.Email as Email from Person as t1
GROUP BY t1.Email
HAVING COUNT(email) > 1

