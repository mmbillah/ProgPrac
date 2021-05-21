use sql_store;

create table orders_archive as
select * from orders;

insert into orders_archive
select * from orders
where order_date<'2019-01-01';