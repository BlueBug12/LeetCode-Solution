
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
        ListNode* pre_head = new ListNode(0);
        ListNode* pre=pre_head;
        int sum;
        bool carry=0;
        
        while(l1!=NULL||l2!=NULL){
            if(l1==NULL){
                sum=l2->val+carry;
                l2=l2->next;
            }
            else if(l2==NULL){
                sum=l1->val+carry;
                l1=l1->next;
            }
            else{
                sum =l1->val+l2->val+carry;
                l1=l1->next;
                l2=l2->next;
            }
            
            ListNode* node=new ListNode(sum%10);
            carry=sum/10;
            pre->next=node;
            pre=node;
            
        }
        if(carry){pre->next=new ListNode(1);}
        return pre_head->next;
    }
};