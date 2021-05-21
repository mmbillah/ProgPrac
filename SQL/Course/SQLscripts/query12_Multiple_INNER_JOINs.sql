-- joining multiple tables

use sql_store;

select 
	o.order_id, 
	o.order_date, 
    c.first_name, 
    c.last_name, 
    os.name as status
from customers c
join orders o
	on c.customer_id=o.customer_id
join order_statuses os
	on o.status=os.order_status_id






