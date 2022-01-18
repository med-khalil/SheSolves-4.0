# Problem J  : Balanced String (Hard Version)

## Statement :
**Before Attempting to solve this problem it is advised to read Problem E (Balanced String : Easy Version ) for more clarity on Balanced strings**

After rigorous training sessions, Asma became an expert when it comes to strings. She can now perform 2 operations multiple times ( possibly perform no operation whatsoever):
* Add characters to the string.
* Delete a character from the string.


Given a string s can you help Asma determine the minimal number of operations required to turn the string s into a balanced string.

## Input :
The first line contains one integer **T** (1<=T<=10<sup>4</sup>) indicating the number of test cases. 
the next **T** lines contain the description of each test case consisting of an integer **n** (1 <= n <= 10<sup>5</sup>) indicating the length of the string and the string itself **s**.

## Output :
For each test case output one integer - The minimal number of operations required to make the string **s** balanced.

## Example :
Input 1:
```
4
4
aabb
3
aab
3
aaa
4
aaac   
```

Output 1:
```
0  
1
0
1
```
In the first test case the string aabb is already balanced ( both 'a' and 'b' appear equally).So no operation is required.

In the second test case, Asma can achieve the same result using two different methods : either delete a character 'b'  turning the string s into the balanced string "aa" or add a character 'b' to make 'a' and 'b' appear equally

In the third test case,The string only contains one character 'a' thus making it balanced.

In the fourth test case , Asma needs to perform one operation : delete the character 'c' turning the string s into "aaa" which is a balanced string.

Input 2:
```
5
20
psfjakccxikwsgqfbcqx
20
moavomzoingrjephuulo
20
lracyoivlzsbcwavjwfy
20
lnhlnrwmwcmcmpwqjpds
20
ugirswrjhxinrgqrisfp
```

Output 2:
```
7
5
6
8
7
```

