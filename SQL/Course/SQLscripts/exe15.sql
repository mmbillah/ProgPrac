-- implicit syntax for cross join
select
	s.name as shipper,
    p.name as product
from shippers s, products p
order by s.name;

-- explicit syntax for cross join
select
	s.name as shipper,
    p.name as product
from shippers s 
cross join products p
order by s.name;

