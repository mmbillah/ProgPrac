use sql_invoicing;

-- update a sinlge row
update invoices
set 
	payment_total = invoice_total*0.5, 
	payment_date = due_date
where invoice_id = 3;

-- update multiple rows
update invoices
set 
	payment_total = invoice_total*0.5, 
	payment_date = due_date
where client_id in (3,5);

-- using subquery with update clause
update invoices
set 
	payment_total = invoice_total*0.5, 
	payment_date = due_date
where client_id in (select client_id
								from clients
								where state in ('NY','WV')
                                )