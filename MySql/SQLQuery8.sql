create table coupons( id int primary key identity(1,1),
code varchar(10),
discount int);

insert into coupons values('10Dis1',10);
insert into coupons values('10Dis2',10);
insert into coupons values('10Dis3',10);
insert into coupons values('10Dis4',10);
insert into coupons values('10Dis5',10);

insert into coupons values('50Dis1',50);
insert into coupons values('50Dis2',50);
insert into coupons values('50Dis3',50);
insert into coupons values('50Dis4',50);
insert into coupons values('50Dis5',50);
insert into coupons values('50Dis6',50);

insert into coupons values('100Dis1',100);
insert into coupons values('10D0is2',100);
insert into coupons values('100Dis3',100);
insert into coupons values('100Dis4',100);
insert into coupons values('100Dis5',100);

select * from coupons where id>0;

create table orders(id int primary key identity(1,1),
coupon_id int references coupons(id),
amount decimal(7,2));

insert into orders values(1,1000);
insert into orders values(2,1200);
insert into orders values(3,1350);
insert into orders values(4,1400);
insert into orders values(5,900);
insert into orders values(6,800);
insert into orders values(7,1100);
insert into orders values(8,1300);
insert into orders values(9,1500);
insert into orders values(10,1700);

insert into orders values(null,1500);


select o.id,o.coupon_id,o.amount,c.id,c.code,c.discount,Round((o.amount-(o.amount/c.discount)),4) as discounted_price 
from orders as o inner join coupons as c 
on o.coupon_id = c.id;


select sum(amount) from orders where id>0;



select count(o.id) as Total_orders,sum(o.amount)as Total_amount, count(c.code) as reedemed,round(sum(o.amount/c.discount),2) as total_savings
from orders as o join coupons as c on o.coupon_id = c.id;


