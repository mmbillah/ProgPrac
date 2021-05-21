use sql_store;

select 
	order_id,
    order_date,
    'Active' as status
from orders
where order_date>='2019-01-01'

union

select 
	order_id,
    order_date,
    'Archived' as status
from orders
where order_date<'2019-01-01';
-- order by order_date desc;

select first_name
from customers
union
select name 
from products