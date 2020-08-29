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
    int sumNumbers(TreeNode* root, int current_sum){
        if(!root)
            return 0;
        else if(!root->left&&!root->right)
            return current_sum*10+root->val;
        else
            return sumNumbers(root->left,current_sum*10+root->val)+sumNumbers(root->right,current_sum*10+root->val);

    }
    int sumNumbers(TreeNode* root) {
        return sumNumbers(root,0);
    }
};
