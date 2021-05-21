use sql_store;

select
	c.first_name as name,
    c.state,
    sum(oi.quantity*oi.unit_price) as expense
from customers c
join orders o
	on c.customer_id=o.customer_id
join order_items oi
	on o.order_id=oi.order_id
where state='VA'
group by name -- with rollup
having expense > 100


