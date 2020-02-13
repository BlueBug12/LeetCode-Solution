# [21. Merge Two Sorted Lists](https://leetcode.com/problems/merge-two-sorted-lists/)

## Description

Merge two sorted linked lists and return it as a new list. The new list should be made by splicing together the nodes of the first two lists.

```example
Input: 1->2->4, 1->3->4
Output: 1->1->2->3->4->4
```

## Solution
I think the method to merge two sorted lists is the basic spirit of merge-sort. So we just need to look over two lists, compare which element is smaller, and link them together by the proper order.

_**Time complexity: O(M+N)**_

## Summary
Fortunately, this problem use the data structure of linked list to merge. If it were implemented by array, we would need N+M more additional memory.
