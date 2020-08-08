# [105. Construct Binary Tree from Preorder and Inorder Traversal](https://leetcode.com/problems/construct-binary-tree-from-preorder-and-inorder-traversal/)

## Description

<div class="content__u3I1 question-content__JfgR"><div><p>Given preorder and inorder traversal of a tree, construct the binary tree.</p>

<p><strong>Note:</strong><br>
You may assume that duplicates do not exist in the tree.</p>

<p>For example, given</p>

<pre>preorder =&nbsp;[3,9,20,15,7]
inorder = [9,3,15,20,7]</pre>

<p>Return the following binary tree:</p>

<pre>    3
   / \
  9  20
    /  \
   15   7</pre>
</div></div>

## Solution
This an interesting question. It shows that we can use two vector to present the structure of the binary tree. Let me explain how it works.
First, in _inorder traversal_, the node is visited only when its left subtree is totally visited. But in _preorder traversal_, each node is visited immediately. As a result, we can take the first node in `preorder-vector` as the root node, and find this node in `inorder-vector`. Once it is found, we know the total number of nodes in left subtree and right subtree. That is, the root node found in `inorder-vector` split the vector into two sub-vector. These two sub-vector can form two subproblems, then we have the recursive relation.
 For example, we have two vectors:
 ```
 preorder = [3,9,20,15,7]
 inorder = [9,3,15,20,7]
 ```
 Find `'3'` in inorder-vector, take it as root node, and construct two subproblems:
 ```
     3
    / \
left  right
 ```
left:
 ```
 preorder = [9]
 inorder = [9]
 ```
right:
 ```
 preorder = [20,15,7]
 inorder = [15,20,7]
 ```


_**Time complexity: O(n^2)**_

## Summary
Actually, these question can be solved in _**O(n)**_ time complexity. Because we can pass the `inorder-vector` first to get the position information, then we don't need the for loop to find the corresponding index.
