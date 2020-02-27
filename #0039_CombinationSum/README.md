# [39. Combination Sum](https://leetcode.com/problems/combination-sum/)

## Description

Given a set of candidate numbers (candidates) (without duplicates) and a target number (target), find all unique combinations in candidates where the candidate numbers sums to target.

```example
Input: candidates = [2,3,6,7], target = 7,
A solution set is:
[
  [7],
  [2,2,3]
]
```

## Solution
Use recursive function to find all possible combinations.

## Summary
When using recursion, we must make good use of the characteristics of stack, and be careful of the parameters which are passed by reference. The changes in next function call may affect the value of variable in current function .
