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
    ListNode* swapPairs(ListNode* head) {
        ListNode* t1;
        ListNode* t2;
        ListNode* start=head;
        if(head==NULL||head->next==NULL){return head;}
        head=head->next;
        for(;start!=NULL&&start->next!=NULL;){

            t1=start->next;
            t2=t1->next;
            if(t2!=NULL&&t2->next!=NULL){
                start->next=t2->next;
            }
            else{
                start->next=t2;
            }
            t1->next=start;
            start=t2;
        }
        return head;
    }
};

/*Recursion version: (https://leetcode.com/problems/swap-nodes-in-pairs/discuss/507146/C%2B%2B-Simple-Recursion)
class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if(head == NULL || head -> next == NULL) return head;
        ListNode* swapped = swapPairs(head->next->next);
        ListNode* tmp = head->next;
        head->next = swapped;
        tmp->next = head;
        return tmp;
    }
};
*/
