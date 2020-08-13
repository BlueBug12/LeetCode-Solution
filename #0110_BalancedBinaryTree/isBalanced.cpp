/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:

    pair<bool,int> depth(TreeNode* root){
        if(!root)
            return make_pair(true,0);
        pair<bool,int>left=depth(root->left);
        pair<bool,int>right=depth(root->right);
        if(left.first&&right.first&&abs(left.second-right.second)<=1)
           return make_pair(true,1+max(left.second,right.second));

        return make_pair(false,1+max(left.second,right.second));
    }
    bool isBalanced(TreeNode* root) {
        return depth(root).first;
    }

};
