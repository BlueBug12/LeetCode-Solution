# [27. Remove Element](https://leetcode.com/problems/remove-element/)

## Description

Given an array nums and a value val, remove all instances of that value in-place and return the new length.

```example
Given nums = [3,2,2,3], val = 3,

Your function should return length = 2, with the first two elements of nums being 2.

It doesn't matter what you leave beyond the returned length.
```

## Solution
An intuitive way is using _erase_ function, traverse whole vector, and dynamically change the size of the vector.</br>
Another solution is using the same idea of [_unique_](https://en.cppreference.com/w/cpp/algorithm/unique) function.

_**Time complexity: O(N)**_

## Summary
Easy.
