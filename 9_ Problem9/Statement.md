# Problem I : AYCHA'S SPECIAL GAME

## Statement:



You are given a list of N words seperated by spaces. In each word, you need to replace each letter with its alphabet position(A:1 , B:2 and so on) in order to obtain a new string composed of digits.

Initially, your score is 0. For each word you recieve 1 point if there exists another word in the list such that the two words are different but give the same number representation when applying the transformation. (If you have two different words which lead to the same number representation you recieve 1 point from the first word and 1 point from the second word).

Your task is to count the score you achieved.




## Input :
On the first line, you’ll read the number of tests T then you’ll proceed to read T tests (All tests are independent of one another)
For each test, you’ll read a number N (1<=N<=10^3) and then N words separated with only one space.

It is guaranteed that the sum of N over all test cases doesn't exceed 10^3 and that each word will be composed of at most 8 characters.

## Output :
For each test, the output is a single line that contains the final value of the score M.

## Example:
Input 1 :  

```
1
4
BAC FGY BAC PTKL   
```

Output 1:  

```
0    
```

Input 2:  

```
1
5
BAC FGY UC PTKL BAC
```

Output 2:  

```
3  
```



## Note :

In the first test, we started with ”BAC FGY BAC PTKL” then we replaced each letter with its alphabet position which gave us : 213 6725 213 16201112
We noticed that we have the same number twice but from the same word, so we got 0 points

In the second test, we started with "BAC FGY UC PTKL BAC” then we replaced each letter with its alphabet position which gave us : 213 6725 213 16201112 213

  for the first string "BAC" there exists another string ("UC") different from "BAC" which has the same number representation. Therefore you recieve 1 point from this string.
  
  for the second string there are no other strings which lead to the same number representation.
  
  for the third string "UC" there exists another string ("BAC") different from "UC" which has the same number representation. Therefore you recieve 1 point from this string.
  
  for the fourth string "PTKL" there are no other strings which lead to the same number representation.
  
  for the fifth string "BAC" there exists another string("UC") different from "BAC" which has the same number representation. Therefore you recieve 1 point from this string.
  
So we have 3 points in total.

