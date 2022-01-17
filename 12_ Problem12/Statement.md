# Problem L : Bouncing mushroom

## Statement:

Yessine has just started playing Super Mario and he's stuck on a hard level.

In this level, Mario comes across a platform filled with weird monsters called Goombas. He must then wait for them to die in order to advance to the next level. Goombas are characters that follow these rules : 

* Each Goomba walks in one direction (right / left).
* All Goombas will advance with a speed of 1 square per second.
* When two Goombas bump into each other, they switch directions immediately.
* A Goomba dies when he exceeds one of the platform's limits.

The platform is divided into squares and represented by a string **s[1..n]** with each character representing a square. The string can only contain these 3 characters : 

* **'>'** : The square is occupied by a Goomba going right 
* **'<'**  : The square is occupied by a Goomba going left 
* **'.'**   : The square is empty  

Yessine is curious to know how many seconds it will take for the platform to be empty so he can finish the game as fast as possible. Please help him.

## Input :

The first line contains one integer **T** (1<=T<=10^4) indicating the number of test cases. \
The next **T** lines contain the description of the test cases, two lines per a test case. \
In the first line you are given one integer **n**  (1 <= n <= 10^5) : the length of the string. \
The second line contains the string **s** consisting of **n** characters.

It is guaranteed that the sum of **n** over all test cases doesn't exceed 10^5

## Output :

For each test case output one integer — How many seconds it will take for the platform to be empty.

It can be proven that the platform will be empty after a certain number of seconds.

## Example:

Input 1 :  

```
2
5
..>.<
5
..<.>
```

Output 1:  

```
 5
 3
```

Input 2:  

```
1
17
..>...<...<...>.. 
```

Output 2:  

```
15
```
