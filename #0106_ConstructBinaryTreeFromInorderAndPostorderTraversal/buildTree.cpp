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
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder, int pos_beg, int in_beg, int len){

        if(len<=0)
            return nullptr;
        int middle = m[postorder[pos_beg+len-1]];

        return new TreeNode(postorder[pos_beg+len-1],
                            buildTree(inorder, postorder, pos_beg, in_beg, middle-in_beg),
                            buildTree(inorder, postorder, middle-in_beg+pos_beg,middle+1, len-middle+in_beg-1));
    }

    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {

        for(int i=0;i<inorder.size();++i)
            m[inorder[i]]=i;

        return buildTree(inorder,postorder,0,0,postorder.size());
    }
private:
    map<int,int>m;
};
