use sql_hr;

-- self join
select
	e.employee_id,
    e.first_name as employee_name,
    m.first_name as manager
from employees e
join employees m
	on e.reports_to=m.employee_id;
    