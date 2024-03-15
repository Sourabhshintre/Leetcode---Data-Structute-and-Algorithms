select product_name,year,price from product
inner join Sales 
on 
Sales.product_id = Product.product_id;