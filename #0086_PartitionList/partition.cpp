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
    ListNode* partition(ListNode* head, int x) {
        if(head==NULL)
            return NULL;
        ListNode* h1;
        ListNode* temp;
        ListNode* iter=head;
        head=new ListNode(0,head);
        if(head->next->val<x)
            h1=head->next;
        else
            h1=head;

        while(iter->next!=NULL){
            if(iter->next->val<x){
                if(iter->next==h1->next){
                    h1=h1->next;
                    iter=iter->next;
                }
                else{
                    temp=iter->next;
                    iter->next=temp->next;
                    temp->next=h1->next;
                    h1->next=temp;
                    h1=temp;
                }
            }
            else
                iter=iter->next;
        }
        return head->next;
    }
};
