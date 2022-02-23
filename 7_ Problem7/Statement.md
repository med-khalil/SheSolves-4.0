# Problem G : Combination Lock

## Statement: 
One day, Naima and Eya have come up with an idea that consists of building a combination lock that will keep their most treasured savings safe. Each time they want to store something inside the safe, they have to open the lock.

A pirate named Anas was trying to steal their treasure, and he coincidentally overheard the secret code that unlocks the combination lock.

The combination lock is represented by n rotating disks with digits from 0 to 9 written on them. To open the lock, Anas has to turn some disks so that the combination of digits on the disks forms the secret combination.
 
In one move, he can rotate one disk by one digit either forwards or backwards. In particular, in one move he can go from digit 0 to digit 9 and vice versa.

Since Anas is pressed for time and afraid to get caught he want to open the lock using the least amount of moves possible.

Can you figure out the minimum number of moves that he needs to unlock the safe?
## Input :
The first line contains a single integer n (1 ≤ n ≤ 1000) —- the number of disks on the combination lock.
The second line contains a string of n digits — the original state of the disks.
The third line contains a string of n digits — the secret combination that opens the lock.


## Output :
Print a single integer the minimum number of moves Anas needs to open the lock.

## Example:
Input 1 :  

```
5
82195
64723   
```

Output 1:  

```
13   
```

Input 2:  

```
2
12
13
```

Output 2:  

```
1  
```

