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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int sum = l1->val+l2->val;
        bool carry=sum/10;
        
        ListNode* head= new ListNode(sum%10);
        ListNode* pre=head;
        l1=l1->next;
        l2=l2->next;
        while(l1!=NULL&&l2!=NULL){
            sum =l1->val+l2->val+carry;
            ListNode* node=new ListNode(sum%10);
            carry=sum/10;
            pre->next=node;
            l1=l1->next;
            l2=l2->next;
            pre=node;
            
        }
        
        if(l1!=NULL){l1->val+=carry;pre->next=l1;}
        else if(l2!=NULL){l2->val+=carry;pre->next=l2;}
        else{
            if(carry){pre->next=new ListNode(1);}
        }
        ListNode* current=pre->next;
        while(current!=NULL&&current->val>=10){
            current->val=current->val%10;
            if(current->next==NULL){
                current->next=new ListNode(1);
                break;
            }
            else{
                current->next->val+=1;
                current=current->next;
            }
            
        }
        return head;
    }
};