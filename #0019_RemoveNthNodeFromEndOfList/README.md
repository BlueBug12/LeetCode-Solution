# [19. Remove Nth Node From End of List](https://leetcode.com/problems/remove-nth-node-from-end-of-list/)

## Description

Given a linked list, remove the n-th node from the end of list and return its head.

```example
Given linked list: 1->2->3->4->5, and n = 2.

After removing the second node from the end, the linked list becomes 1->2->3->5.
```

## Solution
If we want to find the target element in one pass, we need two pointer. _**pre_target**_ points to the previous pointer of the target, and _**end**_ points to the list end. These two pointers take a distance of _n+1_ because we need the preivous pointer of the target to re-link the rest of links.

Once we find the end of the list, we also find the target.(the next pointer of _**pre_target**_) But we need to be careful of the _n+1_ distance(the list may have only _n_ elements), which may cause _out_of_index error_. So there are two tips to solve this problem.
1. if we find that the length of list is _n_, just delete the _**head**_ and return the next of _**head**_
2. **new** a dummy head, whose next pointer is the original head of list. Then we don't need to worry about the length of list because. Although this method need one more dummy element, it's a more clean and intuitive way (but I need to save memory to get a higher rank!!).


## Summary
Just easy.
