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
    void pathSum(TreeNode* root, int sum, vector<int>& temp){
        if(!root)
            return ;

        temp.push_back(root->val);
        if(!root->left&&!root->right&&sum==root->val){
            ans.push_back(temp);
        }
        else{
            pathSum(root->left, sum-root->val, temp);
            pathSum(root->right, sum-root->val, temp);
        }


        temp.pop_back();

    }
    vector<vector<int>> pathSum(TreeNode* root, int sum) {
        vector<int>temp;
        pathSum(root, sum, temp);
        return ans;
    }
private:
    vector<vector<int>>ans;
};
