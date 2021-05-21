select
	order_id,
    order_date,
    case
		when year(order_date)=year(now()) then 'Active'
        when year(order_date)=year(now())-1 then 'Last Year'
        when year(order_date)<year(now())-1 then 'Archive'
        else 'Future'
	end as category
from
	orders