# [111. Minimum Depth of Binary Tree](https://leetcode.com/problems/minimum-depth-of-binary-tree/)

## Description

<div class="content__u3I1 question-content__JfgR"><div><p>Given a binary tree, find its minimum depth.</p>

<p>The minimum depth is the number of nodes along the shortest path from the root node down to the nearest leaf node.</p>

<p><strong>Note:</strong>&nbsp;A leaf is a node with no children.</p>

<p><strong>Example:</strong></p>

<p>Given binary tree <code>[3,9,20,null,null,15,7]</code>,</p>

<pre>    3
   / \
  9  20
    /  \
   15   7</pre>

<p>return its minimum&nbsp;depth = 2.</p>
</div></div>

## Solution
Notice what the **Note** say: _A leaf is a node with no children_, and what we need to find is the shortest path from the root node down to the nearest leaf node. So, if the current node only have one child, the min-depth of this node should depend on it's child, instead of stop counting. I make a recursion to traverse the whole tree. If the node have two children, return the minimum depth of them; otherwise, return the depth of the only child, or return 0 if the node doesn't have any child.

_**Time complexity: O(n)**_

## Summary
Be careful of the definition of each data structure.
