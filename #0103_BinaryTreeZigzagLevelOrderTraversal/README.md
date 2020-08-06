# [103. Binary Tree Zigzag Level Order Traversal](https://leetcode.com/problems/binary-tree-zigzag-level-order-traversal/)

## Description

<div class="content__u3I1 question-content__JfgR"><div><p>Given a binary tree, return the <i>zigzag level order</i> traversal of its nodes' values. (ie, from left to right, then right to left for the next level and alternate between).</p>

<p>
For example:<br>
Given binary tree <code>[3,9,20,null,null,15,7]</code>,<br>
</p><pre>    3
   / \
  9  20
    /  \
   15   7
</pre>
<p></p>
<p>
return its zigzag level order traversal as:<br>
</p><pre>[
  [3],
  [20,9],
  [15,7]
]
</pre>
<p></p></div></div>

## Solution
This is another type of _level order traversal_. We just need to add an additional _flag_ variable to determine the direction of pushing new element into the answer. We know the size of each level in advance, so we can relocate the correct position of the element if needed.

_**Time complexity: O(n)**_

## Summary
In this case, I think the iterative solution may be more convenient than the recursive one.
