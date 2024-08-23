# Write your MySQL query statement below
select customer_id, count(visit_id) as count_no_trans from  visits left join transactions using(visit_id) where transactions.visit_id is NULL group by visits.customer_id;
