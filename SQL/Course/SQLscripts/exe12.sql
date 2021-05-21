select 
	p.product_id, 
    name, 
    quantity
from products p
left join order_items oi
	on p.product_id=oi.product_id