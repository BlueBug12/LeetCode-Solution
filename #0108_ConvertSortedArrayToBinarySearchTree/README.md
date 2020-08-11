# [108. Convert Sorted Array to Binary Search Tree](https://leetcode.com/problems/convert-sorted-array-to-binary-search-tree/)

## Description

<div class="content__u3I1 question-content__JfgR"><div><p>Given an array where elements are sorted in ascending order, convert it to a height balanced BST.</p>

<p>For this problem, a height-balanced binary tree is defined as a binary tree in which the depth of the two subtrees of <em>every</em> node never differ by more than 1.</p>

<p><strong>Example:</strong></p>

<pre>Given the sorted array: [-10,-3,0,5,9],

One possible answer is: [0,-3,9,-10,null,5], which represents the following height balanced BST:

      0
     / \
   -3   9
   /   /
 -10  5
</pre>
</div></div>

## Solution
Basically we can apply the same idea of `binary search` to solve this problem. Each time we need to create a new node, we pick the middle element of the current vector. In this way, we can make sure that the height of the left subtree and right subtree should be balanced(never differ by more than 1). Then, according to the position of middle element, we can spilt the vector into two sub-vector to construct two subproblems, which is a recursive form.

_**Time complexity: O(n)**_

## Summary
Only when the binary tree is balanced, the advantage of this data structure can be presented.
