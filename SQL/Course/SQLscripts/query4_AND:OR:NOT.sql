SELECT *
FROM customers
-- WHERE points > 3000
-- WHERE state != 'VA'
-- WHERE birth_date > '1990-01-01'	AND points > 1000
-- WHERE birth_date > '1990-01-01'	OR points > 1000
-- WHERE birth_date > '1990-01-01'	OR (points > 1000 AND state = 'VA')
-- WHERE NOT (birth_date > '1990-01-01'	AND points > 1000)		#NOT operator inverts the arithmatic/logical operators
WHERE birth_date <= '1990-01-01'	OR points <= 1000		#this query returns the same instance as the previous query

# logical operator order: AND > OR > 
# however, the order can be changed using parenthesis, just like mathematical operators