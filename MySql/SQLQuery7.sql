select id,fname,lname 
from csd1 
where len(CONCAT(fname,lname))<12 
order by len(CONCAT(fname,lname)),lower(CONCAT(fname,lname)),id;