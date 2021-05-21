select
	concat(first_name, ' ', last_name) as customer,
	coalesce(phone,'Unknown') as phone
from customers