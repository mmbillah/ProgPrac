-- find customers who have ordered lettuce

use sql_store;

select
	customer_id,
    first_name,
    last_name
from customers
where customer_id in (
		select customer_id
        from orders o
        left join order_items oi
			on o.order_id=oi.order_id
		where oi.product_id=3
)