# [112. Path Sum](https://leetcode.com/problems/path-sum/)

## Description

<div class="content__u3I1 question-content__JfgR"><div><p>Given a binary tree and a sum, determine if the tree has a root-to-leaf path such that adding up all the values along the path equals the given sum.</p>

<p><strong>Note:</strong>&nbsp;A leaf is a node with no children.</p>

<p><strong>Example:</strong></p>

<p>Given the below binary tree and <code>sum = 22</code>,</p>

<pre>      <strong>5</strong>
     <strong>/</strong> \
    <strong>4</strong>   8
   <strong>/</strong>   / \
  <strong>11</strong>  13  4
 /  <strong>\</strong>      \
7    <strong>2</strong>      1
</pre>

<p>return true, as there exist a root-to-leaf path <code>5-&gt;4-&gt;11-&gt;2</code> which sum is 22.</p>
</div></div>

## Solution
Only when the current node is the leaf node (without any child), the `sum` value should be checked that whether or not the path sum is euqal to it. Otherwise, keep track down the binary tree until the target value of sum is matched.

_**Time complexity: O(n)**_

## Summary
Easy.
