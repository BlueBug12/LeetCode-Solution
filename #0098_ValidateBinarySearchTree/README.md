# [98. Validate Binary Search Tree](https://leetcode.com/problems/validate-binary-search-tree/)

## Description

<div class="content__u3I1 question-content__JfgR"><div><p>Given a binary tree, determine if it is a valid binary search tree (BST).</p>

<p>Assume a BST is defined as follows:</p>

<ul>
	<li>The left subtree of a node contains only nodes with keys <strong>less than</strong> the node's key.</li>
	<li>The right subtree of a node contains only nodes with keys <strong>greater than</strong> the node's key.</li>
	<li>Both the left and right subtrees must also be binary search trees.</li>
</ul>

<p>&nbsp;</p>

<p><strong>Example 1:</strong></p>

<pre>    2
   / \
  1   3

<strong>Input:</strong>&nbsp;[2,1,3]
<strong>Output:</strong> true
</pre>

<p><strong>Example 2:</strong></p>

<pre>    5
   / \
  1   4
&nbsp;    / \
&nbsp;   3   6

<strong>Input:</strong> [5,1,4,null,null,3,6]
<strong>Output:</strong> false
<strong>Explanation:</strong> The root node's value is 5 but its right child's value is 4.
</pre>
</div></div>

## Solution
For every node in the `BST`, we need to check the following four properties to verify whether or not it is valid.
1. The value of left child is less than the value of root.
2. The value of right child is greater than the value of root.
3. The value of righmost child of of the left child of root is less than the value of root.
4. The value of leftmost child of of the right child of root is greater than the value of root.

I think the property _1_ and _2_ is self-evident; however, property _3_ and _4_ seems a little bit complicated. You can see the example below to understand what these two properties is needed.

* without property _3_, the BST below would be verified as a valid BST, but it is invalid because `node 45` is greater than the `root-node 30`.
    ```

       30
       /
      10
        \
         15
          \
           45
    ```
* And so on, without property _4_, the BST below would be verified as a valid BST, but it is invalid because `node 25` is less than the `root-node 30`.
    ```
       30
         \
          45
          /
        35
        /
       25

    ```
As a result, what we need to do is to pass the max and min node for each recursive call, and use them to check these four properties.

_**Time complexity: O(n)**_

## Summary
Proper _3_ and property _4_ can also be considered as the **greates value of node in left-subtree and the least value of node in right-subtree**, which are important properties of `BST`
