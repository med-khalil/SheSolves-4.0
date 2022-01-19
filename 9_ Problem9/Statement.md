# Problem A : AYCHA'S SPECIAL GAME

## Statement:



You are given a string S. You need to split it into words. In each word, you need to replace each letter with its alphabet position.
You would win two points if you got the same number but from different origin



## Input :
On the first line, you’ll read the number of tests T then you’ll proceed to read T tests (All tests are independent of one another)
For each test, you’ll read a string S that represents a sentence consisting of words separated with only one space.



## Output :
For each test, the output is a single line that contains the final value of the score M.

## Example:
Input 1 :  

```
BAC FGY BAC PTKL   
```

Output 1:  

```
0    
```

Input 2:  

```
BAC FGY UC PTKL BAC MLE BM  
```

Output 2:  

```
4  
```



## Note :

In the first test, we started with S=” BAC FGY BAC PTKL” then we splitted it into 3 and replaced each letter with its alphabet position which gave us : 213 6725 213 16201112
We noticed that we have the same number twice but from the same word, so we got 0 points

In the second test, we started with S=” BAC FGY UC PTKL BAC MLE BM” then we splitted it into 5 and replaced each letter with its alphabet position which gave us : 213 6725 213 16201112 213 13125 213
We noticed that we have the same number 4 times but we only have to different origins, so we have 4 points.

