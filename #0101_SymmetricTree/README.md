# [101. Symmetric Tree](https://leetcode.com/problems/symmetric-tree/)

## Description

<div class="content__u3I1 question-content__JfgR"><div><p>Given a binary tree, check whether it is a mirror of itself (ie, symmetric around its center).</p>

<p>For example, this binary tree <code>[1,2,2,3,4,4,3]</code> is symmetric:</p>

<pre>    1
   / \
  2   2
 / \ / \
3  4 4  3
</pre>

<p>&nbsp;</p>

<p>But the following <code>[1,2,2,null,3,null,3]</code> is not:</p>

<pre>    1
   / \
  2   2
   \   \
   3    3
</pre>

<p>&nbsp;</p>

<p><b>Follow up:</b> Solve it both recursively and iteratively.</p>
</div></div>

## Solution
I think the recursion solution is more intutive to me, so I try to practice the iterative one. At first I used two `stack` to main two subtree, but I found that I can use one `stack` to represent them. Any operation should be done twice for the stack to maintain the correct structure. The rest of the work is to compare the nodes one by one in symmetric sequence. Once the `stack` is empty, the tree is proved symmetric.

_**Time complexity: O(n)**_

## Summary
The recursion version:
```cpp
class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p==NULL&&q!=NULL)
            return false;
        else if(p!=NULL&&q==NULL)
            return false;
        else if(p==NULL&&q==NULL)
            return true;
        else{
            if(p->val==q->val)
                return (isSameTree(p->right,q->left)&&isSameTree(p->left,q->right));
            else
                return false;
        }

    }
    bool isSymmetric(TreeNode* root) {
        if(!root)
            return true;
        return isSameTree(root->left,root->right);
    }
};
```
