-- # Write your MySQL query statement below
-- select distinct Product.product_id,Product.product_name
-- from 
-- product
-- left join
-- sales on product.product_id = sales.seller_id
-- where Sales.sale_date BETWEEN '2019-01-01' AND '2019-03-31';

Select X.product_id, product_name
From(
Select Product.product_id, product_name,sale_date
From Product left join Sales on Product.product_id = Sales.product_id
Group by Product.product_id
Having sale_date between '2019-01-01' and '2019-03-31') X