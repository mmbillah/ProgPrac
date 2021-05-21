select *
from products p
where not exists (
	select product_id
    from order_items
    where product_id = p.product_id
)