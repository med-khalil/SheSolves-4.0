# Problem K : Stairs game

## Statement:

Mahmoud and Hani love to play a game called stairs at the mall that consists of going up a stairway composed of **n** steps, starting at the first step and going as fast as they can to determine who reaches the end faster. The **n** th step is considered the end of the stairway . However, after noticing their game, the mall introduced a new rule which said that you can't jump more than one step at a time. In other words, when standing on the ith step you can only go to the **i+1** th or the **i+2** th step.

Naturally, the kids were upset about this rule because it meant that their game was no longer fun. However the security guard Omar told them that they can still have fun playing their game with this new rule as there are still many different ways they can go up the stairs.
Your Task is to determine the number of different paths a person can take to reach the end of the stairway when following the rule.
Two paths are considered differents if there exists one step that is steped on in one path and not in the other.


## You will answer **T** distinct test cases each with a different value of **n** .

## Input :
The first line contains one integer **T** (1<=T<=10^5) indicating the number of test cases. Then T test cases follow.

Each line contains a test case consisting of one integer **n** the length of the stairway.

1<=n<=10^6

## Output :
Print the different number of paths a person can take to reach the end of the stairway.

As the result can be very high, print the result modulo 1000000007.

Hint : We know that (a+b) MOD x = (a MOD x) + (b MOD x) so to avoid overflow you should apply the modulo everytime you make an operation on the result. 

## Example:
Input 1 :  

```
4
1
2
4 
6   
```

Output 1:  

```
0  
1
3
8
```

Example for n = 4 , there are 4 stairs :

1 - 2 - 3 - 4

There are 3 distincts paths to reach the end of the stairway :

1 -> 2 -> 3 -> 4

1 -> 2 -> 4

1 -> 3 -> 4

