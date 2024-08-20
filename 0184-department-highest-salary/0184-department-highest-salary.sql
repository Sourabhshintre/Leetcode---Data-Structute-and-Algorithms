# Write your MySQL query statement below
with cte as
(select e.name as Employee , e.salary, d.name as 
department, max(e.salary) over(partition by e.departmentid) as max_salary
from Employee e
left join Department d
on e.departmentId=d.id)


select department,employee,salary
from cte
where salary = max_salary