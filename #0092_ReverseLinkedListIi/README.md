# [92. Reverse Linked List II](https://leetcode.com/problems/reverse-linked-list-ii/)

## Description

<div><p>Reverse a linked list from position <em>m</em> to <em>n</em>. Do it in one-pass.</p>

<p><strong>Note:&nbsp;</strong>1 ≤ <em>m</em> ≤ <em>n</em> ≤ length of list.</p>

<p><strong>Example:</strong></p>

<pre><strong>Input:</strong> 1-&gt;2-&gt;3-&gt;4-&gt;5-&gt;NULL, <em>m</em> = 2, <em>n</em> = 4
<strong>Output:</strong> 1-&gt;4-&gt;3-&gt;2-&gt;5-&gt;NULL
</pre>
</div>


## Solution
We need three pointers to do the in-place and one-pass reverse.
Just see the following example:
```
0(dummy) -> 1 -> 2 -> 3 -> 4 -> 5 ->NULL
```
First, locate the position before the first element we want to reverse.
```
0(dummy) -> 1(pre) -> 2(cur) -> 3 -> 4 -> 5 ->NULL
```
Then, we do the three-pointer-swapping:
```
//ListNode* temp = pre -> next;
0(dummy) -> 1(pre) -> 2(cur,temp) -> 3 -> 4 -> 5 ->NULL

//pre -> next = cur -> next;
0(dummy) -> 1(pre) -> 3 -> 4 -> 5 ->NULL
       2(cur,temp) ->

//cur -> next = cur -> next -> next;
0(dummy) -> 1(pre) -> 3 -> 4 -> 5 ->NULL
            2(cur,temp) ->

//pre -> next -> next = temp;
0(dummy) -> 1(pre) -> 3 -> 2(cur,temp)-> 4 -> 5 ->NULL
```
Repeat the previous step again:
```
//ListNode* temp = pre -> next;
0(dummy) -> 1(pre) -> 3(temp) -> 2(cur)-> 4 -> 5 ->NULL

//pre -> next = cur -> next;
0(dummy) -> 1(pre) -> 4 -> 5 ->NULL
 3(temp) -> 2(cur) ->

//cur -> next = cur -> next -> next;
0(dummy) -> 1(pre) -> 4 -> 5 ->NULL
            3(temp) -> 2(cur) -> 5 ->NULL

//pre -> next -> next = temp;
0(dummy) -> 1(pre)  -> 4 -> 3 -> 2 -> 5 ->NULL
```
Finally, we finish reverse.
_**Time complexity: O(n)**_

## Summary
This question shows the advantage of the linked-list. We can reverse it in _**O(n)**_; insert element or change the sequence in _**O(1)**_.
