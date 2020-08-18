# [116. Populating Next Right Pointers in Each Node](https://leetcode.com/problems/populating-next-right-pointers-in-each-node/)

## Description

<div class="content__u3I1 question-content__JfgR"><div><p>You are given a <strong>perfect binary tree</strong>&nbsp;where&nbsp;all leaves are on the same level, and every parent has two children. The binary tree has the following definition:</p>

<pre>struct Node {
  int val;
  Node *left;
  Node *right;
  Node *next;
}
</pre>

<p>Populate each next pointer to point to its next right node. If there is no next right node, the next pointer should be set to <code>NULL</code>.</p>

<p>Initially, all next pointers are set to <code>NULL</code>.</p>

<p>&nbsp;</p>

<p><strong>Follow up:</strong></p>

<ul>
	<li>You may only use constant extra space.</li>
	<li>Recursive approach is fine, you may assume implicit stack space does not count as extra space for this problem.</li>
</ul>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<p><img alt="" src="https://assets.leetcode.com/uploads/2019/02/14/116_sample.png" style="width: 640px; height: 218px;"></p>

<pre><strong>Input:</strong> root = [1,2,3,4,5,6,7]
<strong>Output:</strong> [1,#,2,3,#,4,5,6,7,#]
<strong>Explanation: </strong>Given the above perfect binary tree (Figure A), your function should populate each next pointer to point to its next right node, just like in Figure B. The serialized output is in level order as connected by the next pointers, with '#' signifying the end of each level.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li>The number of nodes in the given tree is less than <code>4096</code>.</li>
	<li><code>-1000 &lt;= node.val &lt;= 1000</code></li>
</ul>
</div></div>

## Solution
The basic idea is to traverse the binary tree level by level, just like `BFS`. But the question says that we have to solve it with _**O(1)**_ space, or using recursive call. This restriction makes the problem more difficult to be solved. The major question is, we don't know what the next node is when we are at the current level. As a result, we must link the neighbor node at the previous(parent) level, which is the key of this problem. Therefore, we have two while loop, the outer one for level traversal, and the inner one for traversing the neighbor node and linking their neighbor children.

_**Time complexity: O(n)**_

## Summary
The recursion answer(in java), based on the same idea in the iteration version:
```java
class Solution {
    public void connect_(Node root){
        if(root == null || root.left == null)
            return;
        root.left.next = root.right;
        if(root.next != null)
            root.right.next = root.next.left;
        connect_(root.left);
        connect_(root.right);
    }
    public Node connect(Node root) {
        connect_(root);
        return root;
    }
}

```
