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
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(!head||!head->next)
            return head;
        ListNode* pre=new ListNode(head->val+1);
        ListNode* pseudo=pre;
        ListNode* deleted_node;
        bool duplicate=0;
        while(head->next!=NULL){
            if(head->next->val==head->val){
                deleted_node=head;
                head=head->next;
                delete deleted_node;
                pre->next=NULL;
                duplicate=1;

            }else if(duplicate){
                deleted_node=head;
                head=head->next;
                delete deleted_node;
                pre->next=NULL;
                duplicate=0;

            }else{
                pre->next=head;
                pre=head;
                head=head->next;
            }
        }
        if(!duplicate)
            pre->next=head;
        head=pseudo->next;
        delete pseudo;
        return head;
    }
};
