# [24. Swap Nodes in Pairs](https://leetcode.com/problems/swap-nodes-in-pairs/)

## Description

Given a linked list, swap every two adjacent nodes and return its head.

```example
Given 1->2->3->4, you should return the list as 2->1->4->3.
```

## Solution
Use three pointer to record what we need. See the flow below:
```text
(s is start)

step 1: 1 -> 2 -> 3 -> 4
        s    t1   t2

step 2: 1 -> 4            
        s    
        2 -> 3 -> 4
        t1   t2

step 3: 2 -> 1 -> 4
        t1   s     

step 4: 3 -> 4
        s


```
Notice that if there is element next to t2 in step 2(no pair), just take t2, and the flowing steps are the same.

_**Time complexity: O(N)**_

## Summary
Though it seems a little bit complex, it is fast and efficient. I found another recursion method by [Peng-tech
](https://leetcode.com/problems/swap-nodes-in-pairs/discuss/507146/C%2B%2B-Simple-Recursion). It's very clean and beautiful, but slower.
