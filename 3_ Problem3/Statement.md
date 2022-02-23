# Problem C : Computer Game

## Statement:

Omnia is playing a computer game. Now she wants to complete the first level of this game.

A level is a rectangular grid of 2 rows and n columns. Omnia controls a character, which starts in cell (1,1). To complete a level, Omnia's character should reach cell (2,n).

Omnia's character can move from one cell to another in one step if the cells are adjacent by side and/or corner. Formally, it is possible to move from cell (x1,y1)
to cell (x2,y2) in one step if |x1−x2|≤1 and |y1−y2|≤1. Obviously, it is prohibited to go outside the grid.

There are traps in some cells. If Omnia's character finds himself in such a cell, he dies, and the game ends.


Help Omnia determine if it is possible to complete the level.


## Input :
The first line contains a single integer **T** (1≤T≤100) — the number of test cases. Then the test cases follow. Each test case consists of three lines.

The first line contains a single integer **n** (3≤n≤100) — the number of columns.

The next two lines describe the level. 
The i-th of these lines describes the i-th line of the level — the line consists of the characters '.' and '#'. 
The character '.' corresponds to a safe cell, the character '#' corresponds to a trap cell.

Additional constraint on the input: cells (1,1) and (2,n) are always safe.

## Output :
For each test case, output YES if it is possible to complete the level, and NO otherwise.

## Example:
Input :  

```
4
3
...
...
4
..##
##..
4
.###
###.
6
.#.#.#
#.#.#. 
```

Output :  

```
YES
YES
NO
YES
```


