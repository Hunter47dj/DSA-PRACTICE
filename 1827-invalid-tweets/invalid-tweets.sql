# Write your MySQL query statement below
select tweet_id from (select * from tweets where length(content) >15) as temp;