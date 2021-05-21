-- numeric functions

-- round()
-- ceiling ()
-- floor ()
-- truncate ()
-- abs ()

-- string functions

-- length ()
-- upper ()
-- lower ()
-- trim ()
-- ltrim ()
-- rtrim ()
-- substring ()
-- replace ()
-- locate ()
-- concat ()

-- time functions

-- now()
-- curdate()
-- curtime()
-- year/month/monthname/day/dayname/hour/minute/second(now())
-- extract(year/month/day/hour/minute/second from now())

select extract(month from now());

-- formatting date and time

select date_format(now(),'%D %M %Y');
select date_format(now(),'%H:%i:%s %p');

-- calculating dates and times

select date_add(now(), interval 1 hour);
select date_sub(now(), interval 1 month);
select datediff(now(),'2021-01-08');
select time_to_sec(now()) - time_to_sec('11:00')











