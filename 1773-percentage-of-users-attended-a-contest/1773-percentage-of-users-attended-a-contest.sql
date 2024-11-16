# Write your MySQL query statement below
select r.contest_id, ROUND(COUNT(distinct r.user_id)*100/(select count(user_id) from Users), 2) as percentage
from register r
left join users u
on r.user_id = u.user_id
group by contest_id
order by percentage desc, contest_id