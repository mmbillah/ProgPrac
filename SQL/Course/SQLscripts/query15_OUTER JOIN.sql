-- outer joins can be of two types: left and right
-- for left join, all the records of the table on the left is returned
-- for right join, all the records of the table on the right is returned
-- whether the on condition is true or not

select *
-- 	c.customer_id,
--  c.first_name,
--  o.order_id
from customers c
left join orders o 			-- the outer keyword is optional, just like the inner keyword
	on c.customer_id=o.customer_id