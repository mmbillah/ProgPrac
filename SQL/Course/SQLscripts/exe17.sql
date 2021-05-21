use sql_invoicing;

create table payment_archive as
select
    i.invoice_id,
    i.number, 
    c.name as client_name,
    i.invoice_total,
    i.payment_total,
    i.invoice_date,
    i.due_date,
    i.payment_date
from invoices i
join clients c
	on i.client_id=c.client_id
where i.payment_date is not null