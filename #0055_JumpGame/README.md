# [55. Jump Game](https://leetcode.com/problems/jump-game/)

## Description

Given an array of non-negative integers, you are initially positioned at the first index of the array.

Each element in the array represents your maximum jump length at that position.

Determine if you are able to reach the last index.

```example
Input: [2,3,1,1,4]
Output: true
Explanation: Jump 1 step from index 0 to 1, then 3 steps to the last index.
```

## Solution
The basic idea is that if the elements(jump length) in front of 0 can't reach the index behind 0, it's no way to reach the last index. So I made a counter named `safe`, which recorded the max safe range that can contain 0. If we encounter 0 and the counter is less than or equal to 0, return false.

_**Time complexity: O(n)**_

## Summary
Memorize the key information, and you can safe time.
