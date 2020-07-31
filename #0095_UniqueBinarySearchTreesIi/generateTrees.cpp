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
    vector<TreeNode*> genTreesUtil(int beg, int end) {
        if (end < beg) return { NULL };
        if (end == beg) return { new TreeNode(beg) };

        vector<TreeNode*> trees;
        for (int i = beg; i <= end; ++i) {

            vector<TreeNode*> leftTrees = genTreesUtil(beg, i - 1);
            vector<TreeNode*> rightTrees = genTreesUtil(i + 1, end);

            for (auto& l : leftTrees)
                for (auto& r : rightTrees) {
                    auto t = new TreeNode(i);
                    t->left = l;
                    t->right = r;
                    trees.push_back(t);
                }
        }
	    return trees;
    }
    vector<TreeNode*> generateTrees(int n) {
	    if (n == 0) return {};
	    return genTreesUtil(1, n);
    }
};
