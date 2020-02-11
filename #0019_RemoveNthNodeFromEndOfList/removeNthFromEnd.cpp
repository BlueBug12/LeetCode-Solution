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
    ListNode* removeNthFromEnd(ListNode* head, int n) {

        ListNode* end=head;
        ListNode* pre_target=head;

        for(int i=0;i<n;++i){end=end->next;}
        if(end==NULL){
            head=head->next;
            delete pre_target;
            return head;
        }
        else{end=end->next;}
        while(end!=NULL){
            end=end->next;
            pre_target=pre_target->next;
        }

        end=pre_target->next;
        pre_target->next=pre_target->next->next;
        delete end;
        return head;
    }
};


 /* My solution 2

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {

        ListNode* pre_target=new ListNode(-1);
        pre_target->next=head;
        ListNode* end=head;
        head=pre_target;

        for(int i=0;i<n;++i){end=end->next;}

        while(end!=NULL){
            end=end->next;
            pre_target=pre_target->next;
        }

        end=pre_target->next;
        pre_target->next=pre_target->next->next;
        delete end;
        pre_target=head->next;
        delete head;
        return pre_target;
    }
};*/
