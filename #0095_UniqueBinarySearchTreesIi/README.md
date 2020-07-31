# [95. Unique Binary Search Trees II](https://leetcode.com/problems/unique-binary-search-trees-ii/)

## Description

<div class="content__u3I1 question-content__JfgR"><div><p>Given an integer <code>n</code>, generate all structurally unique <strong>BST's</strong> (binary search trees) that store values 1 ...&nbsp;<em>n</em>.</p>

<p><strong>Example:</strong></p>

<pre><strong>Input:</strong> 3
<strong>Output:</strong>
[
&nbsp; [1,null,3,2],
&nbsp; [3,2,null,1],
&nbsp; [3,1,null,null,2],
&nbsp; [2,1,3],
&nbsp; [1,null,2,null,3]
]
<strong>Explanation:</strong>
The above output corresponds to the 5 unique BST's shown below:

   1         3     3      2      1
    \       /     /      / \      \
     3     2     1      1   3      2
    /     /       \                 \
   2     1         2                 3
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>0 &lt;= n &lt;= 8</code></li>
</ul>
</div></div>

## Solution
This is another great example to show how powerful the dynamic programming is. We can split the problem into two subproblem that consists of its left child and right child. As a result, the recursion form can be defined. We keep calling the children of the current node until it is the leaf of the `BST` or `nullptr`. After the result is return, we combine all possible left subtree and right subtree to generate the complete solution.

_**Time complexity: O(n!)**_

## Summary
Refer to [IgorLeet
](https://leetcode.com/problems/unique-binary-search-trees-ii/discuss/299072/C%2B%2B-16ms-beats-98.1-of-cpp-submissions).
