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

bool validBST(TreeNode* root,TreeNode* minNode, TreeNode* maxNode){
    if(!root)
        return true;
    if((!minNode||root->val>minNode->val)&&(!maxNode||root->val<maxNode->val))
        return validBST(root->left,minNode,root)&&validBST(root->right,root,maxNode);
    return false;
}
class Solution {
public:
    bool isValidBST(TreeNode* root) {
        return validBST(root,NULL,NULL);
    }
};
