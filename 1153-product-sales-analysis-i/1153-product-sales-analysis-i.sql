# Write your MySQL query statement below
select product_name,year,price from sales , Product where sales.product_id = product.product_id;