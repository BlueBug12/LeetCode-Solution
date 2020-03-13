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
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head){return head;}
        ListNode* temp=head;
        int counter=1;
        while(temp->next!=NULL){
            ++counter;
            temp=temp->next;
        }
        ListNode* tail=temp;
        k%=counter;
        temp=head;
        for(int i=0;i<counter-k-1;++i){
            temp=temp->next;
        }
        tail->next=head;
        head=temp->next;
        temp->next=NULL;

        return head;
    }
};
