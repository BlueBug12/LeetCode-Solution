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
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder,int start, int end, int index){
        if(start>end)
            return nullptr;

        int middle=start;
        for(;preorder.at(index)!=inorder.at(middle);++middle);
        return new TreeNode(preorder.at(index),
                            buildTree(preorder,inorder,start,middle-1,index+1),
                            buildTree(preorder,inorder,middle+1,end,index+middle-start+1));
    }

    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        return buildTree(preorder,inorder,0,preorder.size()-1,0);
    }
};
