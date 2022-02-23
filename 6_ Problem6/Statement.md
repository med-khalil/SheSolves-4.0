# Problem F : Valentine's day

## Statement:
Sara is cute. She receives a lot of gifts on valentine's day. But Sara is very materialistic and will open a gift  
if its price is strictly higher than the last opened gift. **Sara will always open the first gift**.

Given the prices of the gifts return the number of opened gifts.

## Input :
Each test case consists of 1 integer **n**(1<=n<=10^5) : the total number of gifts.  
followed by **n** integers **pi** (1<=pi<=1000): the price of the i-th gift.

## Output :
output the number of opened gifts

## Example:
Input 1 :  

```
8
1 4 1 2 3 4 5 6
```

Output 1:  

```
4
```

_the gifts opened are `1,4,5,6`_

Input 2:  

```
5
1 1 1 1 1
```

Output 2:  

```
1
```
_the gifts opened are `1`_
