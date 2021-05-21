SELECT 
	first_name, 
    last_name, 
    points + 10,		-- arithmatic expressions
    points * 10 + 100 AS discount_factor1,		-- alias AS to rename the column
    (points + 10) * 100 AS 'discount factor 2'		-- column name as a string
FROM customers
ORDER BY points;

SELECT DISTINCT state		-- for selecting unique values, use DISTINCT
FROM customers 