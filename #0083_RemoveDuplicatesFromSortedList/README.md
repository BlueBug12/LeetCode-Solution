# [83. Remove Duplicates from Sorted List](https://leetcode.com/problems/remove-duplicates-from-sorted-list/)

## Description

<div class="content__u3I1 question-content__JfgR"><div><p>Given a sorted linked list, delete all duplicates such that each element appear only <em>once</em>.</p>

<p><strong>Example 1:</strong></p>

<pre><strong>Input:</strong> 1-&gt;1-&gt;2
<strong>Output:</strong> 1-&gt;2
</pre>

<p><strong>Example 2:</strong></p>

<pre><strong>Input:</strong> 1-&gt;1-&gt;2-&gt;3-&gt;3
<strong>Output:</strong> 1-&gt;2-&gt;3
</pre>
</div></div>

## Solution
It's much easier than [82. Remove Duplicates from Sorted List II](https://leetcode.com/problems/remove-duplicates-from-sorted-list-ii/) because we don't need to delete all duplicates( each element appears once), which means that the additional pointers are not needed to record the previous position.
_**Time complexity: O(n)**_
## Summary
Always remember to `delete` the discarded element to avoid memory leakage.
