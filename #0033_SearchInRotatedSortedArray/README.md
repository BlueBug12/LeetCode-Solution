# [33. Search in Rotated Sorted Array](https://leetcode.com/problems/search-in-rotated-sorted-array/)

## Description

Suppose an array sorted in ascending order is rotated at some pivot unknown to you beforehand.</br>
(i.e., [0,1,2,4,5,6,7] might become [4,5,6,7,0,1,2]).

You are given a target value to search. If found in the array return its index, otherwise return -1.

You may assume no duplicate exists in the array.

Your algorithm's runtime complexity must be in the order of O(log n).

Example1:
```example
Input: nums = [4,5,6,7,0,1,2], target = 0
Output: 4
```

Example2:
```example
Input: nums = [4,5,6,7,0,1,2], target = 3
Output: -1
```

## Solution
I used a modified binary search to find the position pivot (the smallest element in array).Once finding the pivot, then we could use binary search to find the target.

I was going to reconcat the vector, but I noticed that we only needed to do binary search partly because we had knowing the position of pivot. We could use the value of the first element to determine the range of searching.

_**Time complexity: O(2logN)=O(logN)**_

## Summary
I was going to use [_rotate_](https://en.cppreference.com/w/cpp/algorithm/rotate) to reconcat the vector.
