-- explicit join (recommended)

select *
from orders o
join customers c
	on o.customer_id=c.customer_id;
  
  
-- the query below is an exact equivalent of the previous one
-- this is called an implicit join (not recommended)

select *
from orders o, customers c
where o.customer_id=c.customer_id;

-- implicit join is not recommeded because,
-- in absence of the where clause, it becomes a cross join

select *
from orders o, customers c



