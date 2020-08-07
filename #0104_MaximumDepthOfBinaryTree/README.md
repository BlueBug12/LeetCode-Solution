# [104. Maximum Depth of Binary Tree](https://leetcode.com/problems/maximum-depth-of-binary-tree/)

## Description

<div class="content__u3I1 question-content__JfgR"><div><p>Given a binary tree, find its maximum depth.</p>

<p>The maximum depth is the number of nodes along the longest path from the root node down to the farthest leaf node.</p>

<p><strong>Note:</strong>&nbsp;A leaf is a node with no children.</p>

<p><strong>Example:</strong></p>

<p>Given binary tree <code>[3,9,20,null,null,15,7]</code>,</p>

<pre>    3
   / \
  9  20
    /  \
   15   7</pre>

<p>return its depth = 3.</p>
</div></div>

## Solution
There are two common way to find the depth of binary tree. `breadth-first-search`(BFS) and `depth-first-search`(DFS). In this case, they can be implemented both in _**O(n)**_. As same as the [levele order traversal](https://github.com/BlueBug12/LeetCode-Solution/tree/master/%230102_BinaryTreeLevelOrderTraversal), make sure that we plus the depth-counter at each level. Because we traverse the binary tree level by level, this method is based on `BFS` algorithm.

Another DFS solution with only one line:
```cpp
int maxDepth(TreeNode *root)
    {
        return root == NULL ? 0 : max(maxDepth(root -> left), maxDepth(root -> right)) + 1;
    }
```
_**Time complexity: O(n)**_

## Summary
`DFS` and `BFS` are basic and important concepts in `tree` or `graph` in computer algorithm. We should pratice more to be familiar with them.
