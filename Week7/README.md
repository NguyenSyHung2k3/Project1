# Week7

## Bank_Transaction

The data about bank transactions consists of a sequence of transactions.
In which:
*	&lt;from_account&gt;: the account from which money is transferred (which is a string of length from 6 to 20 )
*	&lt;to_account&gt;: the account which receives money in the transaction (which is a string of length from 6 to 20)
*	&lt;money&gt;: amount of money transferred in the transaction (which is an integer from 1 to 10000)
*	&lt;time_point&gt;: the time point at which the transaction is performed, it is a string under the format HH:MM:SS  (hour: minute: second)
*	&lt;atm&gt;: the code of the ATM where the transaction is taken (a string of length from 3 to 10)

Write a program that process the following queries: 

* ?number_transactions: compute the total number of transactions of the data
* ?total_money_transaction: compute the total amount of money of transactions  
* ?list_sorted_accounts: compute the sequence of bank accounts (including sending and receiving accounts) appearing in the transaction (sorted in an increasing (alphabetical) order)  
* ?total_money_transaction_from &lt;count&gt;: compute the total amount of money transferred from the account &lt;account&gt;  
* ?inspect_cycle &lt;account&gt; k : return 1 if there is a transaction cycle of length k, starting from account, and return 0, otherwise

**Print to stdout (in each line) the result of each query described above**

## Sales_Analyze

Data about sales in an e-commerce company (the e-commerce company has several shops) consists a sequence of lines.
Each line (represents an order) has the following information:
* &lt;CustomerID&gt;: string of length from 3 to 10
* &lt;ProductID&gt;: string of length from 3 to 10
* &lt;Price&gt;: a positive integer from 1 to 1000
* &lt;ShopID&gt;: string of length from 3 to 10
* &lt;TimePoint&gt;: string representing time-point with the format HH:MM:SS (for example, 09:45:20 means the time-point 9 hour 45 minutes 20 seconds)

Perform a sequence of queries of following types:

* ?total_number_orders: return the total number of orders
* ?total_revenue: return the total revenue the e-commerce company gets
* ?revenue_of_shop &lt;ShopID&gt;: return the total revenue the shop &lt;ShopID&gt; gets 
* ?total_consume_of_customer_shop &lt;CustomerID&gt; &lt;ShopID&gt;: return the total revenue the shop &lt;ShopID&gt; sells products to customer &lt;CustomerID&gt; 
* ?total_revenue_in_period &lt;from_time&gt; &lt;to_time&gt;: return the total revenue the e-commerce gets of the period from &lt;from_time&gt; to &lt;to_time&gt; (inclusive)

**Write in each line, the result of the corresponding query**