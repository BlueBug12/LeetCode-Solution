/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
public:
    Node* cloneGraph(Node* node) {
        if(!node)
            return NULL;
        vector<Node*>done;
        Node* root = new Node(node->val);
        done.push_back(root);
        for(size_t i=0;i<node->neighbors.size();++i)
            root->neighbors.push_back(cloneGraph(node->neighbors.at(i),done));
        return root;

    }
    Node* cloneGraph(Node* node,vector<Node*>&done){
        while(node->val > done.size()){
            done.push_back(NULL);
        }
        //has been copied before
        if(done.at(node->val-1))
            return done.at(node->val-1);
        else{
            Node* root = new Node(node->val);
            done.at(node->val-1) = root;
            for(size_t i=0;i<node->neighbors.size();++i){
                root->neighbors.push_back(cloneGraph(node->neighbors.at(i),done));
            }
            return root;
        }
    }
};
