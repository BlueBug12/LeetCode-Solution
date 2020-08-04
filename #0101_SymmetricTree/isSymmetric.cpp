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

    bool isSymmetric(TreeNode* root) {
        if(!root)
            return true;

        stack<TreeNode*>s;
        s.push(root->left);
        s.push(root->right);

        while(!s.empty()){
            TreeNode* t1=s.top();s.pop();
            TreeNode* t2=s.top();s.pop();
            if(t1==NULL&&t2==NULL)
                continue;
            if(t1==NULL||t2==NULL||t1->val!=t2->val)
                return false;
            s.push(t1->left);
            s.push(t2->right);
            s.push(t1->right);
            s.push(t2->left);
        }
        return true;
    }
};
