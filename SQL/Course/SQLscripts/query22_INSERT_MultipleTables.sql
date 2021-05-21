use sql_store;

-- this query shows how to insert rows in multiple tables (heirarchical insertion of rows)
-- there is a parent-child relationship among the tables

-- if the primary key is auto-incremented, no need to specify values for it explicitly

insert into orders (customer_id, order_date, status)
values (1, '2021-02-23', 1);

-- to connect the child table with its parent table, the built in function called last_insert_id()
-- can be used. this is a special case where the parent table primary key is auto-incremented.

insert into order_items ()
values (last_insert_id(), 1, 2, 1.95), 
			(last_insert_id(), 2, 3, 2.95);