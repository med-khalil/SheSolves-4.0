# Problem A : Who is the winner?

## Statement:


Sadok and Haroun love competition, this time they invented a special variant of the heads and tails game.They assigned Fares to keep track of the score and to announce the winner.
The game consists of several levels, The first to pass all levels wins. Both players start playing on level 1, each with a score of 0 points.
At each turn, Fares ask Sadok and Haroun, which face each of them will choose, then flip a coin and if the player manages to guess correctly, he receives a point, otherwise his score is reset to 0.
Sadok always chooses heads **(H)** and Haroun always chooses tails **(T)**.
To move from one level to the next, the player must reach a certain score (depending on the level) and after moving to the next level, the score is reset to 0.
When a player passes the last level, the game ends and Fares announces the winner.
Unfortunately, Fares forgot the winner, but he has the results of all rounds and the rules, so help him to announce the winner.

You are given the number of levels (n) and an array (a) of n element where ai represent the score needed to pass the ith level.
3
2 3 4
that means that the winner must win 2 , then 3 then 4 consucutive wins

so if the game is HHTTHHHTHHHH then the winner is sadook because he won 2 then 3 then 4 consucetive wins



help fares to find the winner given the rules and the rounds of the game

## Input :

the first line containes **n** the number of levels (1<=n <=10) 
next line containes n integers **ai** (1<= ai <= 20) representing the score needed to pass the ith level

next you will be given a string s containing only 'H' and 'T' representing the game.

## Output :

Print the winner of the game

## Example:
Input 1 :  

```
3
2 1 1
HHTHTTTH
```

Output 1:  

```
sadok    
```

Input 2:  

```
1
2
THTT
```

Output 2:  

```
haroun
```

Note here that in the first example, the game ended with the last heads, when Sadok won.

