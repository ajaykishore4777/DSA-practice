# Write your MySQL query statement below
Select p.project_id,round(AVG (e.experience_years),2) AS average_years from project p left join Employee e ON p.employee_id=e.employee_id group by project_id;