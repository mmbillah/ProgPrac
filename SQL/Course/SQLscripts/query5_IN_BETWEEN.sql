SELECT *
FROM customers
WHERE state NOT IN ('VA' , 'GA', 'FL');

select *
from customers
-- where points >= 1000 and points<=3000;
where points between 1000 and 3000; -- gives same result as the previous line