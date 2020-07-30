# [94. Binary Tree Inorder Traversal](https://leetcode.com/problems/binary-tree-inorder-traversal/)

## Description

<div class="content__u3I1 question-content__JfgR"><div><p>Given a binary tree, return the <em>inorder</em> traversal of its nodes' values.</p>

<p><strong>Example:</strong></p>

<pre><strong>Input:</strong> [1,null,2,3]
   1
    \
     2
    /
   3

<strong>Output:</strong> [1,3,2]</pre>

<p><strong>Follow up:</strong> Recursive solution is trivial, could you do it iteratively?</p>
</div></div>

## Solution
Remind that in inorder traversal, if there is no left child or the left child has been visited, the value of current node should be record. The key idea is to distinguish these two situations. In the second while loop, we look for the leftmost node(**situation 1**) and record it. If it's righ child is empty, just go back to the previous node in the stack(**situation 2**).

_**Time complexity: O(n)**_

## Summary
I still prefer the recursive solution. It's more clear and readable.
```cpp
class Solution {
public:
    void inorder(TreeNode* root,vector<int>&ans){
        if(root){
            inorder(root->left,ans);
            ans.push_back(root->val);
            inorder(root->right,ans);
        }
    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int>ans;
        inorder(root,ans);
        return ans;
    }

};
```
