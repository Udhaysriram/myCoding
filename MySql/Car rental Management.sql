create table owners(oid varchar(10) primary key,
oname varchar(20),
oaddress varchar(20),
ophone bigint,
oemail varchar(20)
);
insert into owners values('own101','owner1','10,st,city',5522884477,'123@gmail.com');
insert into owners values('own102','owner2','90,st,city',8855447766,'123@gmail.com');
insert into owners values('own103','owner3','1,st,city',5544771122,'123@gmail.com');
insert into owners values('own104','owner4','17,st,city',3366554477,'123@gmail.com');
create table customers(
cid varchar(10) primary key,
cname varchar(20),
caddress varchar(20),
cphone bigint,
cemail varchar(20)
);
insert into customers values('cust101','customer1','1,st,city',5544772255,'123@gmail.com');
insert into customers values('cust102','customer2','31,st,city',5577885566,'123@gmail.com');
insert into customers values('cust103','customer3','1121,st,city',9988774455,'123@gmail.com');
insert into customers values('cust104','customer4','41,st,city',6622334455,'123@gmail.com');
create table cars(
carid varchar(10) primary key,
carname varchar(10),
cartype varchar(20),
oid varchar(10) references owners(oid)
);

insert into cars values('car101','Hyryder','MSUV','own101');
insert into cars values('car102','Carens','SUV','own102');
insert into cars values('car103','i20','HB','own103');
insert into cars values('car104','Nexon','HB','own104');
create table rentals(
rid varchar(10) primary key,
cid varchar(10) references customers(cid),
carid varchar(10)references cars(carid),
pickup date,
returned date,
kmdriven int,
amount decimal(7,2)
);
insert into rentals values('rent101','cust101','car101','2023-05-15','2023-05-30',600,6000);
insert into rentals values('rent102','cust101','car101','2023-06-15','2023-06-30',600,6000);
insert into rentals values('rent103','cust102','car101','2023-05-01','2023-05-10',450,5000);
insert into rentals values('rent104','cust101','car102','2023-03-15','2023-05-30',600,15000);
insert into rentals values('rent105','cust102','car103','2023-04-15','2023-05-30',600,15000);
insert into rentals values('rent106','cust103','car104','2023-05-15','2023-05-30',600,15000);
insert into rentals values('rent107','cust104','car102','2023-02-15','2023-05-30',600,15000);
insert into rentals values('rent108','cust103','car104','2023-01-15','2023-05-30',600,15000);
insert into rentals values('rent109','cust102','car103','2023-09-15','2023-10-30',600,15000);
insert into rentals values('rent110','cust102','car103','2023-05-15','2023-05-30',600,15000);


-->Task
select c.carname,r.amount from cars as c join rentals as r on r.carid = c.carid WHERE r.amount >5000 and
    YEAR(r.pickup) = YEAR(r.returned)
    AND MONTH(r.pickup) = MONTH(r.returned);