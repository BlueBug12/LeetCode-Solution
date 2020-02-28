# [40. Combination Sum II](https://leetcode.com/problems/combination-sum-ii/)

## Description

Given a collection of candidate numbers (candidates) and a target number (target), find all unique combinations in candidates where the candidate numbers sums to target.

```example
Input: candidates = [10,1,2,7,6,1,5], target = 8,
A solution set is:
[
  [1, 7],
  [1, 2, 5],
  [2, 6],
  [1, 1, 6]
]
```

## Solution
Only need to modify the solution of [39.Combination Sum](https://github.com/BlueBug12/LeetCode-Solution/blob/master/%230039_CombinationSum/combinationSum.cpp). Add a constraint to avoid duplicated ans.
```c++
if(i>start&&candidates.at(i)==candidates.at(i-1)){continue;}
```
## Summary
Easy.
