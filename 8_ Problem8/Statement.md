# Problem H : Akram and Addition

## Statement:
Akram has recently learned about addition in school, but as they start things simple he hasn't learned yet about the "carry" in addition.  
that means if the sum of two digits exceed 10 akram doesn't store one to add to the next digit.  
For example the "akram way" of summing 358 and 824 is:  
<pre>
					3	5	8  
				+  
					8	2	4  
					------------------
				=   	1	7	2  
</pre>
Given a positive integer **a**, akram wants to know how many positive integers **b** there are, such that **a + b < a** with + being akram's addition.  
Can you help him?

## Input :
The first line contains one integer **T** (1<=T<=10<sup>5</sup>) indicating the number of test cases. Then T test cases follow.

Each test case consists of an integer **a**.

1<=a<=10<sup>9</sup>

## Output :
print **T** lines, each line contains one integer: the number of integers **b** such that **a + b < a**, the answer of each test.

## Example:
Input :  

```
1
5
```

Output :  

```
5
```
for **a = 5** there are 5 integers whose sum with **a** is smaller than **a** which are: 5, 6, 7, 8, 9 and their respective sums are 0, 1, 2, 3, 4.
