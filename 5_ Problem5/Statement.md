# Problem E  : Balanced String (Easy Version)

## Statement :
After learning about strings in her algorithmic class, Asma became fascinated with balanced strings.

**A Balanced string** is an alphabetical string (containing only lowercase characters from 'a' to 'z' ) where all characters appear with the same frequency. aabb is a balanced string ( both 'a' and 'b' appear **equally** 2 times ) whereas aab is not balanced ( 'b' appears once whereas 'a' appears twice).
Since Asma is still getting used to strings she can only perform one operation multiple times (possibly perform no operations whatsoever) :
* Add characters to the string.


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
2
```
In the first test case the string aabb is already balanced ( both 'a' and 'b' appear equally).So no operation is required.

In the second test case, Asma needs to add one character 'b' in order to make the string balanced.

In the third test case,The string only contains one character 'a' thus making it balanced.

In the fourth test case , Asma needs to perform the operation 2 times ( Adding 'c' twice )thus making both 'a' and 'c' appear equally 3 times.

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
19
40
8
16
32
```
