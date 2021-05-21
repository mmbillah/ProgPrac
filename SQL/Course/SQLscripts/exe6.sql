select *
from customers
-- where address like '%avenue%' or address like '%trail%'
-- where phone not like '%9'
-- where first_name regexp 'elka|ambur'
-- where last_name regexp 'ey$|on$'
-- where last_name regexp '^my|se'
where last_name regexp 'b[ru]'