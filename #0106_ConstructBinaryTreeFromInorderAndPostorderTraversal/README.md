# [106. Construct Binary Tree from Inorder and Postorder Traversal](https://leetcode.com/problems/construct-binary-tree-from-inorder-and-postorder-traversal/)

## Description

<div class="content__u3I1 question-content__JfgR"><div><p>Given inorder and postorder traversal of a tree, construct the binary tree.</p>

<p><strong>Note:</strong><br>
You may assume that duplicates do not exist in the tree.</p>

<p>For example, given</p>

<pre>inorder =&nbsp;[9,3,15,20,7]
postorder = [9,15,7,20,3]</pre>

<p>Return the following binary tree:</p>

<pre>    3
   / \
  9  20
    /  \
   15   7
</pre>
</div></div>

## Solution
We can solve this problem based on the roughly same idea in [105. Construct Binary Tree from Preorder and Inorder Traversal](https://github.com/BlueBug12/LeetCode-Solution/tree/master/%230105_ConstructBinaryTreeFromPreorderAndInorderTraversal). The only difference is bewteen _postorder_ and _preorder_. In _postorder traversal_, the root node is the last node to be visited, so we have find the root node at the last position in `postorder vector`. Then, split the vector into two vectors to construct the subproblem by recursive call. By the way, this time I use `map` to record the inorder position of each number. Though it takes additional _**O(n)**_  space, it has a better time complexity _**O(n)**_ .

_**Time complexity: O(n)**_

## Summary
Trade space for time.
