# Write your MySQL query statement below

-- select P.product_name, S.year, S.price
-- from Sales as S
-- left join Product as P
-- on S.product_id = P.product_id;

SELECT p.product_name, s.year, s.price
FROM Product AS p, Sales AS s
WHERE p.product_id = s.product_id