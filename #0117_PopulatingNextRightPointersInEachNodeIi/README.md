# [117. Populating Next Right Pointers in Each Node II](https://leetcode.com/problems/populating-next-right-pointers-in-each-node-ii/)

## Description

<div class="content__u3I1 question-content__JfgR"><div><p>Given a binary tree</p>

<pre>struct Node {
  int val;
  Node *left;
  Node *right;
  Node *next;
}
</pre>

<p>Populate each next pointer to point to its next right node. If there is no next right node, the next pointer should be set to <code>NULL</code>.</p>

<p>Initially, all next pointers are set to <code>NULL</code>.</p>

<p>&nbsp;</p>

<p><strong>Follow up:</strong></p>

<ul>
	<li>You may only use constant extra space.</li>
	<li>Recursive approach is fine, you may assume implicit stack space does not count as extra space for this problem.</li>
</ul>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<p><img alt="" src="https://assets.leetcode.com/uploads/2019/02/15/117_sample.png" style="width: 640px; height: 218px;"></p>

<pre><strong>Input:</strong> root = [1,2,3,4,5,null,7]
<strong>Output:</strong> [1,#,2,3,#,4,5,7,#]
<strong>Explanation: </strong>Given the above binary tree (Figure A), your function should populate each next pointer to point to its next right node, just like in Figure B. The serialized output is in level order as connected by the next pointers, with '#' signifying the end of each level.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li>The number of nodes in the given tree is less than <code>6000</code>.</li>
	<li><code>-100&nbsp;&lt;= node.val &lt;= 100</code></li>
</ul>
</div></div>

## Solution
This time, the binary tree is not necessarily _perfect_ like the previous question [116. Populating Next Right Pointers in Each Node](https://github.com/BlueBug12/LeetCode-Solution/tree/master/%230116_PopulatingNextRightPointersInEachNode). As a result, we need to decide which child is the starting node at the next level, and also make sure every node in each level is linked correctly. We just need one additional pointer `pre` that points to the latest node to solve this problem. Every time we traversed a node, we link it as the `next` node of `pre` if `pre` is not a `NULL` pointer. Moreover, during the process of each level traversal, find the first node in the next level and record it as the starting node for the next level traversal.

_**Time complexity: O(n)**_

## Summary
None.
