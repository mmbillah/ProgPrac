SELECT *
FROM order_items
WHERE quantity * unit_price > 30 AND order_id = 6;