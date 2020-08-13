# [110. Balanced Binary Tree](https://leetcode.com/problems/balanced-binary-tree/)

## Description

<div class="content__u3I1 question-content__JfgR"><div><p>Given a binary tree, determine if it is height-balanced.</p>

<p>For this problem, a height-balanced binary tree is defined as:</p>

<blockquote>
<p>a binary tree in which the left and right subtrees of <em>every</em> node differ in height by no more than 1.</p>
</blockquote>

<p>&nbsp;</p>

<p><strong>Example 1:</strong></p>

<p>Given the following tree <code>[3,9,20,null,null,15,7]</code>:</p>

<pre>    3
   / \
  9  20
    /  \
   15   7</pre>

<p>Return true.<br>
<br>
<strong>Example 2:</strong></p>

<p>Given the following tree <code>[1,2,2,3,3,null,null,4,4]</code>:</p>

<pre>       1
      / \
     2   2
    / \
   3   3
  / \
 4   4
</pre>

<p>Return false.</p>
</div></div>

## Solution
My basic idea is shown in the following code:
```cpp
int depth(TreeNode* root){
    if(!root)
        return true;
    return max(depth(root->left),depth(root->right))+1
}
```
This is a `DFS` recursion, we can apply it to get every depth of the node in the binary tree. Moreover, we have to pass another return value to represent it is balanced or not. So I make a `std::pair<bool,int>` as the return type. In this way, we only have to traverse the whole binary tree once to calculate the depth of nodes and compare their depth at the same time.

_**Time complexity: O(n)**_

## Summary
In `python`, we can directly return multiple value, which is more convenient.
