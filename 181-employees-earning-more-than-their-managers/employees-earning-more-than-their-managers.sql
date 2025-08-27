# Write your MySQL query statement below
SELECT e1.name as Employee FROM employee e1 join employee e2 on e1.managerid=e2.id and e1.salary>e2.salary