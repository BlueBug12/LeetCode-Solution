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

    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        if(!root)
            return {};
        queue<TreeNode*>q;
        vector<vector<int>>ans;
        q.push(root);
        bool flag=true;
        while(!q.empty()){
            int size = q.size();
            vector<int>temp(size);

            for(int i=0;i<size;++i){
                TreeNode* cur=q.front();
                int index=(flag) ? i : size-i-1;
                temp.at(index)=cur->val;
                q.pop();
                if(cur->left)
                    q.push(cur->left);
                if(cur->right)
                    q.push(cur->right);
            }
            flag=!flag;
            ans.push_back(move(temp));


        }
        return ans;
    }
};
