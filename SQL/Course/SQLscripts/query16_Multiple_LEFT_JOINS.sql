select
	c.customer_id,
--    o.customer_id as o_customerID,
    c.first_name,
    o.order_id,
	o.shipper_id as shipper
--    sh.shipper_id as sh_shipper
from customers c
left join orders o
	on c.customer_id=o.customer_id
left join shippers sh
	on o.shipper_id=sh.shipper_id
order by c.customer_id

-- best practise is to always using left joins
-- left join can be used on any column, just by changing the order