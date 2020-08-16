# [113. Path Sum II](https://leetcode.com/problems/path-sum-ii/)

## Description

<div class="content__u3I1 question-content__JfgR"><div><p>Given a binary tree and a sum, find all root-to-leaf paths where each path's sum equals the given sum.</p>

<p><strong>Note:</strong>&nbsp;A leaf is a node with no children.</p>

<p><strong>Example:</strong></p>

<p>Given the below binary tree and <code>sum = 22</code>,</p>

<pre>      <strong>5</strong>
     <strong>/ \</strong>
    <strong>4   8</strong>
   <strong>/</strong>   / <strong>\</strong>
  <strong>11</strong>  13  <strong>4</strong>
 /  <strong>\</strong>    <strong>/</strong> \
7    <strong>2</strong>  <strong>5</strong>   1
</pre>

<p>Return:</p>

<pre>[
   [5,4,11,2],
   [5,8,4,5]
]
</pre>
</div></div>

## Solution
This question is basically similar to [112. Path Sum](https://github.com/BlueBug12/LeetCode-Solution/tree/master/%230112_PathSum). The only difference is we need to record the elements that have been traversed in the path, and if the sum-path matches the target value, push the recording vector into parts of answer. In order to save memory, we pass the recording vector by reference, and pop the last element, as its left subtree and right subtree have been traversed already. When the whole binary tree traversal is finished, we find all of the answer.

_**Time complexity: O(n)**_

## Summary
Passing by reference is a good strategy to save memory, but we have to be careful of the modification in any recursive call.
