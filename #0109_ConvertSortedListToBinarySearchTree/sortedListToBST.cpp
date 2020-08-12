/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
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
    TreeNode* sortedArrayToBST(vector<int>& nums, int beg, int end){
        if(end-beg<0)
            return nullptr;
        int middle=(beg+end)/2;
        return new TreeNode(nums.at(middle),sortedArrayToBST(nums, beg, middle-1),sortedArrayToBST(nums, middle+1, end));
    }
    TreeNode* sortedListToBST(ListNode* head) {
        vector<int>nums;
        while(head!=nullptr){
            nums.push_back(head->val);
            head=head->next;
        }
        return sortedArrayToBST(nums, 0, nums.size()-1);
    }
};
