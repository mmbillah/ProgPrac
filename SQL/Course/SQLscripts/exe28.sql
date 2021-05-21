select
	concat(first_name, ' ', last_name) as customer,
    points,
    case
		when points>3000 then 'Gold'
        when points between 2000 and 3000 then 'Silver'
        else 'Bronze'
    end as category
from customers
order by points desc