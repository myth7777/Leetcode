# Write your MySQL query statement below
(select name as results
from Users
join MovieRating
using(user_id)
group by name
order by count(*) DESC, name
LIMIT 1)
UNION ALL
(select title as results
from Movies
join MovieRating
using(movie_id)
where EXTRACT(YEAR_MONTH from created_at) = 202002
group by title
order by avg(rating) DESC, title
limit 1)