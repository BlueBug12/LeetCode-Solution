# [61. Rotate List](https://leetcode.com/problems/rotate-list/)

## Description

Given a linked list, rotate the list to the right by k places, where k is non-negative.

```example
Input: 1->2->3->4->5->NULL, k = 2
Output: 4->5->1->2->3->NULL
Explanation:
rotate 1 steps to the right: 5->1->2->3->4->NULL
rotate 2 steps to the right: 4->5->1->2->3->NULL
```

## Solution
Traverse the list, and record the length and tail pointer when reach the end. Then calculae the index of new head and traverse to it. At last, break the link and re-link them.

_**Time complexity: O(n)**_

## Summary
I try to use unordered_map to record the index of all elements. But it's space wasing, and not much faster.
