-- select employees who earn more than average

use sql_hr;

select
	first_name,
    salary
from employees
where salary > (
	select avg(salary)
    from employees
);

-- find clients without invoices

use sql_invoicing;

select *
from clients
where client_id not in (
	select distinct client_id 
    from invoices
    )