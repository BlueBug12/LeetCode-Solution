/*
// Definition for a QuadTree node.
class Node {
public:
    bool val;
    bool isLeaf;
    Node* topLeft;
    Node* topRight;
    Node* bottomLeft;
    Node* bottomRight;

    Node() {
        val = false;
        isLeaf = false;
        topLeft = NULL;
        topRight = NULL;
        bottomLeft = NULL;
        bottomRight = NULL;
    }

    Node(bool _val, bool _isLeaf) {
        val = _val;
        isLeaf = _isLeaf;
        topLeft = NULL;
        topRight = NULL;
        bottomLeft = NULL;
        bottomRight = NULL;
    }

    Node(bool _val, bool _isLeaf, Node* _topLeft, Node* _topRight, Node* _bottomLeft, Node* _bottomRight) {
        val = _val;
        isLeaf = _isLeaf;
        topLeft = _topLeft;
        topRight = _topRight;
        bottomLeft = _bottomLeft;
        bottomRight = _bottomRight;
    }
};
*/

class Solution {
public:
    Node* construct(vector<vector<int>>& grid) {
       return construct(grid,0,0,grid.size());
    }
    Node* construct(vector<vector<int>>& grid,int i,int j,int len) {
        if(len==1)
            return new Node(grid.at(i).at(j),true);
        int half = len/2;
        Node* root = new Node(false,false);
        Node* tl = construct(grid,i,j,half);
        Node* tr = construct(grid,i,j+half,half);
        Node* bl = construct(grid,i+half,j,half);
        Node* br = construct(grid,i+half,j+half,half);
        if(!tl->isLeaf||!tr->isLeaf||!bl->isLeaf||!br->isLeaf||
           (tl->val!=tr->val)||(tl->val!=bl->val)||(tl->val!=br->val)){
            root->topLeft = tl;
            root->topRight = tr;
            root->bottomLeft = bl;
            root->bottomRight = br;
        }else{
            root->val = grid.at(i).at(j);
            root->isLeaf = true;
            delete tl;
            delete tr;
            delete bl;
            delete br;
        }

        return root;
    }
};
