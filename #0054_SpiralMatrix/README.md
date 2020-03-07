# [54. Spiral Matrix](https://leetcode.com/problems/spiral-matrix/)

## Description

Given a matrix of m x n elements (m rows, n columns), return all elements of the matrix in spiral order.

```example
Input:
[
 [ 1, 2, 3 ],
 [ 4, 5, 6 ],
 [ 7, 8, 9 ]
]
Output: [1,2,3,6,9,8,7,4,5]
```

## Solution
Traverse the matrix in the clockwise direction.There are three special case need to be handled carefully.
1. Horizontal line, like `[[1,2,3]]`.
2. Veritical line, like `[[1],[2],[4]]`.
3. central dot, like `[[1]]`.

For example:
```text
1 2 3
4 5 6
7 8 9
Traverse: 1,2->3,6->9,8->7,4->5

1  2  3  4
5  6  7  8
9 10 11 12
Traverse: 1,2,3->4,8->12,11,10->9,5->6,7
```
_**Time complexity: O(n*m)**_

## Summary
Try to make clean code.
