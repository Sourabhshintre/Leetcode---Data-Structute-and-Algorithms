select customer_id , COUNT(Visits.visit_id) as count_no_trans from Visits
left join Transactions 
on Visits.visit_id = Transactions.visit_id
where Transactions.transaction_id is null
group by Visits.customer_id


# Write your MySQL query statement below
# Write your MySQL query statement below

-- SELECT v.customer_id, COUNT(v.visit_id) AS count_no_trans 
-- from Visits v 
-- LEFT JOIN Transactions t 
-- ON v.visit_id = t.visit_id  
-- WHERE t.transaction_id IS NULL 
-- GROUP BY v.customer_id; 