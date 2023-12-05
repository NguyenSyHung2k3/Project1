# Week4

## Check_Apperance

Cho dãy số nguyên A1, A2, . . . , An với mỗi số nguyên Ai kiểm tra xem có số Aj nào bằng Ai hay không với j < i.

Input:
* Dòng đầu chứa số n (1≤n≤100,000)
* Dòng hai chứa nn số nguyên A1, A2, ..., An (1≤Ai≤1000,000,000)
Output:
**Ghi ra n dòng, dòng thứ i in ra 1 nếu tồn tại Aj=Ai với j < i, ngược lại in ra 0.**

## Hash_String

Given a string s[1…k] which is a sequence of characters taken from {‘a’, . . ., ‘z’}.
Given a positive integer m, the hash code of s is defined by the formula:
H(s) =  (s[1]*256^(k-1) + s[2]*256^(k-2) + . . . + s[k]*256^0) mod m  (the contant integer m is a parameter)
Given a sequence of strings k1, k2, …, kn, compute the corresponding hash codes

Input:
* Line 1: n and m (1 <= n,m <= 100000)
* Line i+1 (i = 1,2,…,n): contains the string ki (the length of each string is less than or equal to 200)
Output:
**Each line contains the corresponding hash code of n given strings**

## Store_Search_String

A database contains a sequence of key k1, k2, ..., kn which are strings (1<=n<=100000). 
Perform a sequence of actions of two kinds:

* find k
* insert k

Input:
Two blocks of information. 
The first block contains a key of (k1,k2,...,kn) in each line. 
The first block is terminated with a line containing *. 
The second block is a sequence of actions of two finds described above: each line contains 2 string: cmd and k in which cmd = find or insert and k is the key (parameter of the action). 
The second block is terminated with a line containing ***. 
Note that the number of actions can be up to 100000.

Output:
**Each line contains the result (0 or 1) of the corresponding action.**

## Sum_Pair_Of_Seq

Cho dãy a1, a2, ..., an trong đó các phần tử đôi một khác nhau và 1 giá trị nguyên dương M. 
Hãy đếm số Q các cặp (i,j) sao cho 1 <= i < j <= n và ai + aj = M.

Dữ liệu:
* Dòng 1: ghi n và M (1 <= n, M <= 1000000)
* Dòng 2: ghi a1, a2, ..., an
Kết quả:
**Ghi ra giá trị Q**