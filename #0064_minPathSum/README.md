# [64. Minimum Path Sum](https://leetcode.com/problems/minimum-path-sum/)

## Description

Given a _m_ x _n_ grid filled with non-negative numbers, find a path from top left to bottom right which minimizes the sum of all numbers along its path.

**Note:** You can only move either down or right at any point in time.

**Example:**
```
Input:
[
  [1,3,1],
  [1,5,1],
  [4,2,1]
]
Output: 7
Explanation: Because the path 1→3→1→1→1 minimizes the sum.
```
## Solution
The idea is basically similiar to [63. Unique Paths II](https://leetcode.com/problems/unique-paths-ii/). Use the concept of _dynamic programming_, calculate the minimum path sum from the top-left to the bottom-right. The value of minimum path sum at each grid is determined by the smallest value within top and left grid plus the self value. Once we traverse the whole martix, the value of minimum path sum is also determined.

**Time complexity:** _**O(mxn)**_
## Summary
This is a problem about _single source shortest path_. There are many powerful algorithms like [Dijkstra](http://alrightchiu.github.io/SecondRound/single-source-shortest-pathdijkstras-algorithm.html)、[Bellman Ford](http://alrightchiu.github.io/SecondRound/single-source-shortest-pathbellman-ford-algorithm.html) which can solve this classical problem efficiently. But in this case, the start point and end point is decided, and the move direction is restricted. Take not a musket to kill a butterfly, so we just need a simple _DP_ method to get the correct answer.
