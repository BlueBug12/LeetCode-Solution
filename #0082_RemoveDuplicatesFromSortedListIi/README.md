# [82. Remove Duplicates from Sorted List II](https://leetcode.com/problems/remove-duplicates-from-sorted-list-ii/)

## Description

<div class="content__u3I1 question-content__JfgR"><div><p>Given a sorted linked list, delete all nodes that have duplicate numbers, leaving only <em>distinct</em> numbers from the original list.</p>

<p>Return the linked list sorted as well.</p>

<p><strong>Example 1:</strong></p>

<pre><strong>Input:</strong> 1-&gt;2-&gt;3-&gt;3-&gt;4-&gt;4-&gt;5
<strong>Output:</strong> 1-&gt;2-&gt;5
</pre>

<p><strong>Example 2:</strong></p>

<pre><strong>Input:</strong> 1-&gt;1-&gt;1-&gt;2-&gt;3
<strong>Output:</strong> 2-&gt;3
</pre>
</div></div>

## Solution
It's not difficult, but the it's a little bit complicated  because of the memory leak issue. The list in this problem is `singly-linked-list`, so you need some additional pointers to record the previous element. Remember to `delete` the elements of duplicate numbers.

_**Time complexity: O(n)**_

## Summary
There a cool recursive solution provided by [kiranveparalakumar:
](https://leetcode.com/problems/remove-duplicates-from-sorted-list-ii/discuss/738462/C%2B%2B-Very-Important!!!!!-Memory-Leak-handled.-Beats-95-speed-and-100-Memory.)
```cpp
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==nullptr) return head;
        ListNode* p1=head->next;
        if(p1 && p1->val==head->val){
         while(p1 && p1->val==head->val) {
             ListNode* p2= p1;
             p1=p1->next;
             p2->next = nullptr;
         }
            return deleteDuplicates(p1);
        }
        else
        head->next = deleteDuplicates(head->next);
        return head;
    }
};

```
Though he/she forgot to delete the element, the idea behind the program is worth learning.
