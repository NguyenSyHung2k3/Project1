# Week7

## Bank_Transaction

The data about bank transactions consists of a sequence of transactions.
In which:
*	&lt;from_account &gt: the account from which money is transferred (which is a string of length from 6 to 20 )
*	to_account: the account which receives money in the transaction (which is a string of length from 6 to 20)
*	money: amount of money transferred in the transaction (which is an integer from 1 to 10000)
*	time_point: the time point at which the transaction is performed, it is a string under the format HH:MM:SS  (hour: minute: second)
*	atm: the code of the ATM where the transaction is taken (a string of length from 3 to 10)

Write a program that process the following queries: 

* ?number_transactions: compute the total number of transactions of the data
* ?total_money_transaction: compute the total amount of money of transactions  
* ?list_sorted_accounts: compute the sequence of bank accounts (including sending and receiving accounts) appearing in the transaction (sorted in an increasing (alphabetical) order)  
* ?total_money_transaction_from account: compute the total amount of money transferred from the account account  
* ?inspect_cycle account k : return 1 if there is a transaction cycle of length k, starting from account, and return 0, otherwise

**Print to stdout (in each line) the result of each query described above**

## Sales_Analyze

Data about sales in an e-commerce company (the e-commerce company has several shops) consists a sequence of lines.
Each line (represents an order) has the following information:
* <CustomerID>: string of length from 3 to 10
* <ProductID>: string of length from 3 to 10
* <Price>: a positive integer from 1 to 1000
* <ShopID>: string of length from 3 to 10
* <TimePoint>: string representing time-point with the format HH:MM:SS (for example, 09:45:20 means the time-point 9 hour 45 minutes 20 seconds)

Perform a sequence of queries of following types:

* ?total_number_orders: return the total number of orders
* ?total_revenue: return the total revenue the e-commerce company gets
* ?revenue_of_shop <ShopID>: return the total revenue the shop <ShopID> gets 
* ?total_consume_of_customer_shop <CustomerID> <ShopID>: return the total revenue the shop <ShopID> sells products to customer <CustomerID> 
* ?total_revenue_in_period <from_time> <to_time>: return the total revenue the e-commerce gets of the period from <from_time> to <to_time> (inclusive)

**Write in each line, the result of the corresponding query**