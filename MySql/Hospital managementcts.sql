
create table patient(
 pid varchar(6) primary key,
 pname varchar(15),
 paddress varchar(20),
 pcity varchar(10),
 pcontact varchar(10)
);

insert into patient values('abc101','user1','12,ast','rjpm','5555555555');
insert into patient values('abc102','user2','15anikam,','rjpm','9999999999');
insert into patient values('abc103','user3','12,ghist,','rjpm','');
insert into patient values('abc104','user4','12,mai st,','rjpm','8888888888');
insert into patient values('abc105','user5','12,anagar,','rjpm','5544557755');
insert into patient values('abc106','user6','12,hay,','rjpm','2200114452');

create table doctor(did varchar(6) primary key,
dname varchar(9));

insert into doctor values('abcd01','doctor1');
insert into doctor values('abcd02','doctor2');
insert into doctor values('abcd03','doctor3');
insert into doctor values('abcd04','doctor4');
insert into doctor values('abcd05','doctor5');

create table appointment(
appno varchar(6) primary key,
appdate date,
appreason varchar(30),
did varchar(6) references doctor(did),
pid varchar(6) references patient(pid)
);

insert into appointment values('t1','2023-05-15','fever','abcd01','abc103');
insert into appointment values('t2','2023-05-15','corona','abcd02','abc105');
insert into appointment values('t3','2023-05-15','cold','abcd03','abc101');
insert into appointment values('t4','2023-05-15','headache','abcd01','abc102');


create table bill(
billno varchar(6) primary key,
billdate date,
billstatus varchar(8),
billamount decimal(7,2),
appno varchar(6) references appointment(appno)
);

insert into bill values('bill01','2023-05-15','pending','1500','t1');

insert into bill values('bill02','2023-05-15','done','500','t2');

create table payment(
payid varchar(6) primary key,
paydate date,
paymode varchar(10),
payamount decimal(7,2),
billno varchar(6) references bill(billno)
);

insert into payment values('pay01','2023-05-15','cash','500','bill02');





select p.pname,b.billamount as Total from patient as p join appointment as a on a.pid = p.pid join bill as b on b.appno = a.appno where p.pcontact != '' order by p.pname;