# [63. Unique Paths II](https://leetcode.com/problems/unique-paths-ii/)

## Description

A robot is located at the top-left corner of a `m` x `n` grid (marked 'Start' in the diagram below).

The robot can only move either down or right at any point in time. The robot is trying to reach the bottom-right corner of the grid (marked 'Finish' in the diagram below).

Now consider if some obstacles are added to the grids. How many unique paths would there be?

![img](./img/robot_maze.png)

An obstacle and empty space is marked as `1` and `0` respectively in the grid.

**Note:** _m_ and _n_ will be at most 100.

**Example 1:**
```example
Input:
[
  [0,0,0],
  [0,1,0],
  [0,0,0]
]
Output: 2
Explanation:
There is one obstacle in the middle of the 3x3 grid above.
There are two ways to reach the bottom-right corner:
1. Right -> Right -> Down -> Down
2. Down -> Down -> Right -> Right
```

## Solution
Image there is a wavefront starting from the origin (top-left point), it will propagate to the bottom-right end point. Every point on the wavefront has its `path number`, which record the max number of paths that the origin can arrive this point. And the value of each `path number` can be calculated by the sum of the it's top grid's `path number` and it's left grid's `path number`. Just see the example bellow:

  | 0 	| 0 	| 0 	| 0 	|
  |-	|-	|-	|-	|
  | 0 	| x 	| 0 	| 0 	|
  | x 	| 0 	| 0 	| x 	|
  | 0 	| 0 	| 0 	| 0 	|

First we need to initialize all the `path number` in the first column and the first row, whose value should ba eithor `1` or `0`.
* Initialize first row:

  | 1 	| 0 	| 0 	| 0 	|
  |-	|-	|-	|-	|
  | 1 	| x 	| 0 	| 0 	|
  | 0 	| 0 	| 0 	| x 	|
  | 0 	| 0 	| 0 	| 0 	|

* Initialize first column:

  | 1 	| 1 	| 1 	| 1 	|
  |-	|-	|-	|-	|
  | 1 	| x 	| 0 	| 0 	|
  | 0 	| 0 	| 0 	| x 	|
  | 0 	| 0 	| 0 	| 0 	|

Then, we can propagate the wavefront:
* First propagate (second row):
  | 1 	| 1 	| 1 	| 1 	|
  |-	|-	|-	|-	|
  | 1 	| 0 	| 1 	| 1 	|
  | 0 	| 0 	| 0 	| x 	|
  | 0 	| 0 	| 0 	| 0 	|
* Second propagate (third row):
  | 1 	| 1 	| 1 	| 1 	|
  |-	|-	|-	|-	|
  | 1 	| 0 	| 1 	| 1 	|
  | 0 	| 0 	| 1 	| 0 	|
  | 0 	| 0 	| 0 	| 0 	|
* Third propagate (forth row):
  | 1 	| 1 	| 1 	| 1 	|
  |-	|-	|-	|-	|
  | 1 	| 0 	| 1 	| 1 	|
  | 0 	| 0 	| 1 	| 0 	|
  | 0 	| 0 	| 1 	| 1 	|

Finally, we can get the path number from the origin to the end point, which is the value of the path number at the end point, so the answer is `1`.
## Summary
At the begining, I think this problem could be solved by the DFS algorithm, I just need to find all possible path from the start to the end point. But it is too slow, even make the	**_Time Limit Exceeded_** error. So I start to think which part of the algorithm wasting most of time. The answer had been staring in the face. This method calculate many possible paths repeatedly. The answer of the problem _"Whether this point can reach the end pont?"_ can be checked by the privious DFS result if this point had been visited. It means that the problem has _**optimal structure**_, which can be solved efficiently by the method of _dynamic programming_. But don't face this problem so seriously. What we need to do is record the path number in the table, and calculate the next value of path number by the previous result, then we can get the answer.
