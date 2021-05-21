select *, quantity_in_stock*unit_price as total_inventory
from products
where name regexp 'pea'
order by total_inventory desc