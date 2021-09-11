class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode* foo = new ListNode(0);
        ListNode* temp;
        while(head){
            if(head->next==foo)
                return true;
            temp = head;
            head = head->next;
            temp->next = foo;
        }
        return false;
    }
};
