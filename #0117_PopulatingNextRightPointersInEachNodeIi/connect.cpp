/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {
        Node* head = root;
        while(root){
            Node* pre=NULL;
            Node* temp = root->left;
            while(root){

                if(root->left){
                    if(pre)
                        pre->next=root->left;
                    if(!temp)
                        temp=root->left;
                    pre=root->left;
                }
                if(root->right){
                    if(pre)
                        pre->next=root->right;
                    if(!temp)
                        temp=root->right;
                    pre=root->right;
                }

                root=root->next;
            }

            root=temp;
        }
        return head;
    }
};
