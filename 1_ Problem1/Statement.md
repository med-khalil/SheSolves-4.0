# Problem A : Image classification

## Statement:
Image classification can be defined as the task of categorizing images into one or multiple predefined classes. Although the task of categorizing an image is instinctive and habitual to human, it is much more challenging for an automated system to recognize and classify images.

Nour is passionate about artificial intelligence, and more specifically about image classification.
She implemented a solution using machine learning to classify images of mathematic signs.

An image is represented as a matrix of pixels where each pixel is either painted in black (represented by '#') or white (represented by '.'). 

Her data set is **only** composed of correct images and the symbol is always painted in black.

We define a correct image as an image that contains a correct plus or a correct minus.

  - A correct plus is defined as two lines, one horizontal, one vertical, having the same size and intersecting in their middle. Their size is odd and strictly greater than one.

  - A correct minus is defined as a horizontal line.

<pre>
........#.                            ..........                        ..........              
....######                            ..#######.                        ..#....... 
........#.  is not a correct image    ..........  is a correct minus    .###......  is a correct plus
........#.                            ..........                        ..#....... 
..........                            ..........                        .......... 
</pre>


Nour lost the code of her image classification algorithm.

Write an algorithm that classifies images from her data set.  

## Input :
The first line contains a single integer **T** (1≤T≤100) — the number of test cases. Then the test cases follow. Each test case consists of one line.

The first line contains two integers **n**, **m** (1≤n, m≤100) — where n and m are the image's height and width.

Each of the next n lines contains m characters. They describe the image. If a character on a line equals ".", then the corresponding pixel is white and if the character equals "#", then the pixel is black.

## Output :
For each test case, output PLUS if the image contains a plus or MINUS if the image contains a minus.  

## Example:
Input :  

```
3
3 3
.#.
###
.#.
3 4
....
.##.
....
4 4
....
....
.#..
....
```

Output :  

```
PLUS
MINUS
MINUS
```
