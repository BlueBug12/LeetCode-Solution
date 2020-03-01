# [46. Permutations](https://leetcode.com/problems/permutations/)

## Description

Given a collection of distinct integers, return all possible permutations.

```example
Input: [1,2,3]
Output:
[
  [1,2,3],
  [1,3,2],
  [2,1,3],
  [2,3,1],
  [3,1,2],
  [3,2,1]
]
```

## Solution
Sort the vector first, and use function [_next_permutation_](https://en.cppreference.com/w/cpp/algorithm/next_permutation) in c++ standard library to generate all the permutations.

_**Time complexity: O(n*n!)**_ (the time complexity of  _next_permutation_ is O(n))

There is another recursive solution from
[escapedRobot](https://leetcode.com/problems/permutations/discuss/523797/C%2B%2B-8ms-faster-than-98.85.-Simple-recursive-solution.).



## Summary
I thought that the recursion is classical, and my solution is easier and suitable for the lazy person like me.
