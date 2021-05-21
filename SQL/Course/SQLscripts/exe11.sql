use sql_invoicing;

select 
    p.client_id as 'Client ID',
	c.name as 'Client Name',
    p.invoice_id as 'Invoice ID',
    p.date as 'Date',
    p.amount as 'Total Amount',
    pm.name as 'Payment Method'
from payments p
join clients c
	on p.client_id=c.client_id
join payment_methods pm
	on p.payment_method=pm.payment_method_id
where p.client_id!=3
order by p.amount desc
limit 5