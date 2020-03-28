# [62. Unique Paths](https://leetcode.com/problems/unique-paths/)

## Description

A robot is located at the top-left corner of a m x n grid.

```example
Input: m = 3, n = 2
Output: 3
Explanation:
From the top-left corner, there are a total of 3 ways to reach the bottom-right corner:
1. Right -> Right -> Down
2. Right -> Down -> Right
3. Down -> Right -> Right
```

## Solution
It's a mathematical problem. The answer is to calculate the combinations of right(m-1) and down(n-1), which is combination(m+n-2, min(m-1,n-1)).

_**Time complexity: O(m+n)**_

## Summary
Be careful of overflow.
