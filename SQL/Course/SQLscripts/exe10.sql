select o.product_id, order_id, name, o.unit_price
from order_items o
inner join products p
	on o.product_id=p.product_id