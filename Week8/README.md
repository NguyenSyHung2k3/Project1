# Week8

## Citizen_Data_Analyze

Given a DataBase about citizen, perform queries over this DataBase.
The input consists of two blocks: the first block is the DataBase and the second block is the list of queries. 
Two blocks are separated by a line containing a character \*.

1. The first block (DataBase about citizen) consists of lines (number of lines can be upto 100000).
 * &lt;code&gt;  
 * &lt;dat_of_birth&gt;  
 * &lt;fathher_code&gt;   
 * &lt;mother_code&gt;  
 * &lt;is_alive&gt;  
 * &lt;region_code&gt;
2. The second block is the list of queries (number of queries can be upto 100000) over the DataBase which consists of following commands:
*  NUMBER_PEOPLE
*  NUMBER_PEOPLE_BORN_AT &lt;date&gt;
*  MOST_ALIVE_ANCESTOR &lt;code&gt;
*  NUMBER_PEOPLE_BORN_BETWEEN &lt;from_date&gt; &lt;to_date&gt;
*  MAX_UNRELATED_PEOPLE

The second block is terminated by a line containing \*\*\*.

## Code_Analyze

Data about submission of a programming contest consists a sequence of lines, each line has the following information:
* &lt;UserID&gt; 
* &lt;ProblemID&gt; 
* &lt;TimePoint&gt;
* &lt;Status&gt;
* &lt;Point&gt; 

Perform a sequence of queries of following types:
* ?total_number_submissions
* ?number_error_submision
* ?number_error_submision_of_user &lt;UserID&gt;
* ?total_point_of_user &lt;UserID&gt;
* ?number_submission_period &lt;from_time_point&gt; &lt;to_time_point&gt;

*The first block is the operational data, which is a sequence of lines (number of lines can be up to 100000), each line contains the information of a submission with above format .The first block is terminated with a line containing the character #.*

*The second block is the query block, which is a sequence of lines (number of lines can be up to 100000), each line is a query described above. The second block is terminated with a line containing the character #.*