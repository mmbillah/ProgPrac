select
	p.date,
    pm.name as payment_method,
    sum(p.amount) as total_payments,
    count(*) as number_of_invoices
from payments p
join payment_methods pm
	on p.payment_method=pm.payment_method_id
where p.date >= '2019-01-05' 		
-- where clause is used before the group by clause
-- we can reference any column for where clause whether they are selected or not
group by p.date, payment_method
having total_payments > 10 and number_of_invoices > 1			
-- having clause is used after the group by clause
-- for having clause, we can reference only the selected columns
order by p.date
limit 2
	
	