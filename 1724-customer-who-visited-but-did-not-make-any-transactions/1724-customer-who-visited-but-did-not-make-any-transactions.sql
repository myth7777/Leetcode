# Write your MySQL query statement below

select v.customer_id, COUNT(v.visit_id) as count_no_trans
from Visits v
Left Join Transactions t 
on t.visit_id = v.visit_id
where t.transaction_id is null
group by v.customer_id;