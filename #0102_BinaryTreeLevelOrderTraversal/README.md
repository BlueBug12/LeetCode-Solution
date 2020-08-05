# [102. Binary Tree Level Order Traversal](https://leetcode.com/problems/binary-tree-level-order-traversal/)

## Description

<div class="content__u3I1 question-content__JfgR"><div><p>Given a binary tree, return the <i>level order</i> traversal of its nodes' values. (ie, from left to right, level by level).</p>

<p>
For example:<br>
Given binary tree <code>[3,9,20,null,null,15,7]</code>,<br>
</p><pre>    3
   / \
  9  20
    /  \
   15   7
</pre>
<p></p>
<p>
return its level order traversal as:<br>
</p><pre>[
  [3],
  [9,20],
  [15,7]
]
</pre>
<p></p></div></div>

## Solution
The key point of the level order traversal problem is to maintain the correct level when the node is being traversed. The recursion solution is very easy, we just need to pass an additional argument that records the current order, and push the value of the current node to the right position of the answer. You can see this in _Summary_.
The other method is to use `queue`. The level order traversal is like a kind of `BFS`(Breadth-First-Search). We have to determine the number of nodes in each iteration, record them as the answer of that level, and push the children nodes of them to the `queue`as the nodes of next level. Once the `queue` is empty, we find the complete answer.

_**Time complexity: O(n)**_

## Summary
Recursion solution:
```cpp
class Solution {
public:
    void traversal(TreeNode* root, vector<vector<int>>& ans, int level){
        if(!root)
            return ;
        if(ans.size()<=level){
            vector<int>temp{root->val};
            ans.push_back(temp);
        }
        else{
            ans.at(level).push_back(root->val);
        }

        traversal(root->left,ans,level+1);
        traversal(root->right,ans,level+1);

    }
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>>ans;
        traversal(root,ans,0);
        return ans;
    }
};
```
