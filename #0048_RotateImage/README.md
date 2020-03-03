# [48. Rotate Image](https://leetcode.com/problems/rotate-image/)

## Description

You are given an n x n 2D matrix representing an image.

```example
Given input matrix =
[
  [1,2,3],
  [4,5,6],
  [7,8,9]
],

rotate the input matrix in-place such that it becomes:
[
  [7,4,1],
  [8,5,2],
  [9,6,3]
]
```

## Solution
The key idea is to rotate the matrix by swapping.
```text
Initial:
  [1,2,3]
  [4,5,6]
  [7,8,9]

1.swap (0,0) and (2,0)
  [7,2,3]
  [4,5,6]
  [1,8,9]

2.swap (2,0) and (2,2)
  [7,2,3]
  [4,5,6]
  [9,8,1]

3.swap (2,2) and (0,2)
  [7,2,1]
  [4,5,6]
  [9,8,3]

You can see that the four swapped elements is rotated clockwise.
So on and so forth.
```

_**Time complexity: O(n^2)**_

## Summary
It's a practical problem, and I think the solution is useful.
