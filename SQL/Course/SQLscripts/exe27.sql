select
	p.product_id,
    p.name,
    count(*) as orders,
    if(
		count(*) =1,
        'Once',
        'Many times') as frequency
from products p
join order_items oi
	on p.product_id=oi.product_id
group by p.product_id, p.name