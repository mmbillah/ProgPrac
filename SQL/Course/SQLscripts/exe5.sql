SELECT * 
FROM products
WHERE quantity_in_stock IN (49,38,72);

SELECT *
FROM customers
WHERE birth_date BETWEEN '1990-01-01' AND '2000-01-01';