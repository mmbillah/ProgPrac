select order_id, o.customer_id, first_name, last_name		-- specify which table the customer_id column belongs to
from orders o 					-- o as an alias for table orders
inner join customers c		-- c as an alias for table customers
	on o.customer_id=c.customer_id;
    
-- joining a table from a different database

use sql_store;

select *
from sql_store.order_items oi
inner join sql_inventory.products p
	on oi.product_id=p.product_id