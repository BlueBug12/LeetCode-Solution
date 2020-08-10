# [107. Binary Tree Level Order Traversal II](https://leetcode.com/problems/binary-tree-level-order-traversal-ii/)

## Description

<div class="content__u3I1 question-content__JfgR"><div><p>Given a binary tree, return the <i>bottom-up level order</i> traversal of its nodes' values. (ie, from left to right, level by level from leaf to root).</p>

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
return its bottom-up level order traversal as:<br>
</p><pre>[
  [15,7],
  [9,20],
  [3]
]
</pre>
<p></p></div></div>

## Solution
In this question, the most important thing is to calculate the _depth_ of the binary tree. Once we know it in advance, we can easily determin in which level the the current node is. So I use a recursive call to return the _max depth_ of the binary tree, and use another recursive function to traverse the whole binary tree, and push its value into the right position.

_**Time complexity: O(n)**_

## Summary
Another iterative solution with `queue`(slower):
```cpp
class Solution {
public:
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        if(!root)
            return {};
        queue<TreeNode*>q;
        q.push(root);
        vector<vector<int>>ans;
        while(!q.empty()){
            int size=q.size();
            TreeNode* cur;
            vector<int>temp;
            for(int i=0;i<size;++i){
                cur=q.front();
                temp.push_back(cur->val);
                q.pop();
                if(cur->left)
                    q.push(cur->left);
                if(cur->right)
                    q.push(cur->right);
            }
            ans.insert(ans.begin(),move(temp));
        }
        return ans;
    }
};
```
