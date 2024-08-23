# Write your MySQL query statement below
select product_name,year,price from sales inner join product where product.product_id = sales.product_id;