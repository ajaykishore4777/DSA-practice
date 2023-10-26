# Write your MySQL query statement below
# Write your MySQL query statement below
select customer_number
from orders
group by customer_number
having count(customer_number)
order by count(customer_number) desc
limit 1;