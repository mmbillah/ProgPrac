use sql_hr;

select
	e.employee_id,
    e.first_name,
    m.first_name as manager,
    m.employee_id as manager_id
from employees e
left join employees m
	on e.reports_to=m.employee_id