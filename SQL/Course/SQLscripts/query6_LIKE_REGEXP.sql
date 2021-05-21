select *
from customers
-- where last_name like 'm____t' 	-- '_' for a single character
-- where last_name like '%y' 				-- '%' for any number of characters
where last_name regexp 'field'