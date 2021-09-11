# [141. Linked List Cycle](https://leetcode.com/problems/linked-list-cycle/)

## Description

<div class="content__u3I1 question-content__JfgR"><div><p>Given <code>head</code>, the head of a linked list, determine if the linked list has a cycle in it.</p>

<p>There is a cycle in a linked list if there is some node in the list that can be reached again by continuously following the&nbsp;<code>next</code>&nbsp;pointer. Internally, <code>pos</code>&nbsp;is used to denote the index of the node that&nbsp;tail's&nbsp;<code>next</code>&nbsp;pointer is connected to.&nbsp;<strong>Note that&nbsp;<code>pos</code>&nbsp;is not passed as a parameter</strong>.</p>

<p>Return&nbsp;<code>true</code><em> if there is a cycle in the linked list</em>. Otherwise, return <code>false</code>.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2018/12/07/circularlinkedlist.png" style="width: 300px; height: 97px; margin-top: 8px; margin-bottom: 8px;">
<pre><strong>Input:</strong> head = [3,2,0,-4], pos = 1
<strong>Output:</strong> true
<strong>Explanation:</strong> There is a cycle in the linked list, where the tail connects to the 1st node (0-indexed).
</pre>

<p><strong>Example 2:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2018/12/07/circularlinkedlist_test2.png" style="width: 141px; height: 74px;">
<pre><strong>Input:</strong> head = [1,2], pos = 0
<strong>Output:</strong> true
<strong>Explanation:</strong> There is a cycle in the linked list, where the tail connects to the 0th node.
</pre>

<p><strong>Example 3:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2018/12/07/circularlinkedlist_test3.png" style="width: 45px; height: 45px;">
<pre><strong>Input:</strong> head = [1], pos = -1
<strong>Output:</strong> false
<strong>Explanation:</strong> There is no cycle in the linked list.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li>The number of the nodes in the list is in the range <code>[0, 10<sup>4</sup>]</code>.</li>
	<li><code>-10<sup>5</sup> &lt;= Node.val &lt;= 10<sup>5</sup></code></li>
	<li><code>pos</code> is <code>-1</code> or a <strong>valid index</strong> in the linked-list.</li>
</ul>

<p>&nbsp;</p>
<p><strong>Follow up:</strong> Can you solve it using <code>O(1)</code> (i.e. constant) memory?</p>
</div></div>

## Solution
My solution is to create a new node `foo`,then after passing any node in the linked list, we re-point its `next` pointer to `foo`. As a result, once we pass a node that its `next` pointer points to `foo`, we know that it has been visited before. Although this method can work well, it may be useless in the real application problem. Because after calling this function, the linked list would be destroyed, which means that we need a copy of it to do this operation. But our origin requirement is to save the space! So there is another reasonable solution: we creat two pointers at first, one point moves one step at each iteration, and the other moves two steps. As a result, if there exists a loop in the linked list, the second pointer will finally catch up the first one. What an interesting solution!

_**Space complexity: O(1)**_
_**Time complexity: O(n)**_

## Summary
Imagine that you are sailing in the ocean, and you want to know whether or not the earth is round. There is a way you can test. You need another boat, and make sure that that one would sail the same route and always move faster than yours. After couple of days, weeks, or years(depends on your speed difference!), if you see the boat is behind you, than you know that the earth is round. Hail to Magellan!
