SELECT 
	order_items.order_id,
	customers.customer_id,
	first_name,
	city,
	order_items.product_id,
    products.name,
    order_items.quantity*order_items.unit_price as Price,
	customers.points
FROM customers
join orders on customers.customer_id = orders.customer_id
join order_items on order_items.order_id = orders.order_id
join products on order_items.product_id = products.product_id
order by order_items.order_id