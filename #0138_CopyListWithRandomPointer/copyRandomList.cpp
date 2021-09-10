/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;

    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if(!head)
            return NULL;
        Node* iter = head;
        Node* temp;

        while(iter){
            temp = new Node(iter->val);
            temp->next = iter->next;
            iter->next = temp;
            iter = iter->next->next;
        }
        iter = head;
        while(iter){
            if(iter->random){
                iter->next->random = iter->random->next;
            }
            iter = iter->next->next;
        }
        iter = head;
        head = head->next;
        while(iter){
            temp = iter->next;
            iter->next = temp->next;
            if(iter->next)
                temp->next = iter->next->next;
            iter = iter->next;
        }
        return head;

    }
};

/* another solution with extra table
class Solution {
public:
    Node* copyRandomList(Node* head) {
        if(!head)
            return head;
        map<Node*,Node*>m;

        Node* new_head = new Node(head->val);
        new_head->random = head->random;
        m[head] = new_head;
        Node* temp = new_head;
        head = head->next;
        while(head){
            temp->next = new Node(head->val);
            temp = temp->next;
            temp->random = head->random;
            m[head] = temp;
            head = head->next;
        }
        temp->next = NULL;
        temp = new_head;
        while(temp){
            temp->random = m[temp->random];
            temp = temp->next;
        }

        return new_head;
    }
};
*/
