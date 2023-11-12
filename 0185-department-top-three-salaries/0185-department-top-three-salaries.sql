select sub.Department, sub.Employee, sub.Salary
from (
    select
        d.name Department,
        e.name Employee,
        e.salary Salary,
    dense_rank() over(partition by d.name order by e.salary desc) salary_rank
    from employee e
    join department d on e.departmentId = d.id
) sub
where sub.salary_rank <= 3