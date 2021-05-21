select
	c.first_name as customer,
    p.name as product
from customers c 
cross join products p -- this is the explicit writing format (recommended)
order by c.first_name;

select
	c.first_name as customer,
    p.name as product
from customers c, products p  -- this is the implicit writing format
order by c.first_name;