select *
from customers
where state in ('TX', 'IL','FL') and last_name regexp 'e[ly]'
order by points desc
limit 3