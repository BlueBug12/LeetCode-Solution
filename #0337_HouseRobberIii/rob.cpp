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
    int tryRob(TreeNode* root, int& l, int& r) {
        if (!root) return 0;

        int l_l = 0, l_r = 0, r_l = 0, r_r = 0;//grandchild node
        l = tryRob(root->left, l_l, l_r);
        r = tryRob(root->right, r_l, r_r);

        return max(root->val + l_l + l_r + r_l + r_r, l + r);
    }

    int rob(TreeNode* root) {
        int l=0, r=0;
        return tryRob(root, l, r);
    }
};
