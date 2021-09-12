/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if(!head)
            return NULL;
        ListNode* slow;
        ListNode* fast;
        slow = head;
        fast = head;
        while(fast->next && fast->next->next){
            slow = slow->next;
            fast = fast->next->next;
            if(slow==fast){//exists a loop
                while(head != fast){
                    head = head->next;
                    fast = fast->next;
                }
                return head;
            }
        }
        return NULL;
    }
};
