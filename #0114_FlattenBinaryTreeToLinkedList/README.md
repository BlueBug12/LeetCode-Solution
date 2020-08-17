# [114. Flatten Binary Tree to Linked List](https://leetcode.com/problems/flatten-binary-tree-to-linked-list/)

## Description

<div class="content__u3I1 question-content__JfgR"><div><p>Given a binary tree, flatten it to a linked list in-place.</p>

<p>For example, given the following tree:</p>

<pre>    1
   / \
  2   5
 / \   \
3   4   6
</pre>

<p>The flattened tree should look like:</p>

<pre>1
 \
  2
   \
    3
     \
      4
       \
        5
         \
          6
</pre>
</div></div>

## Solution
The question saies that we need to flatten the linked list in-place. So, we can't just do the inorder traversal and record the traversed element in sequence. Instead, this problem can be solved in  _**O(1)**_ space with an ingenious way. Let's see the example below:

Original binary tree:
```
    1
   / \
  2   5
 / \   \
3   4   6
```
1. If the current root node has both right child and left child, find the rightmost descendant in the left subtree, and link the right child of the root node as the right child of the descendant.
```
    1 (root)
   / \
  2   5
 / \   \
3   4   6
     \
      5
       \
        6
```
2. If the current root node has a left child, link it as the right child of the root node.
```
    1 (root)
     \
      2   
     / \   
    3   4   
         \
          5
           \
            6
```
3. Make the left child of root NULL and move the root to its right child.
```
    1
     \
      2 (root)  
     / \   
    3   4   
         \
          5
           \
            6
```
4. Repeat step1~step3 until the root node is NULL.
```
    1
     \
      2 (root)  
     / \   
    3   4   
     \   \
      4   5
       \   \
        5   6
         \
          6


          1
           \
            2 (root)  
             \   
              3   
               \
                4
                 \
                  5
                   \
                    6

            1
             \
              2   
               \   
                3 (root)  
                 \
                  4
                   \
                    5
                     \
                      6   
              1
               \
                2   
                 \   
                  3  
                   \
                    4 (root)
                     \
                      5
                       \
                        6    

                1
                 \
                  2   
                   \   
                    3  
                     \
                      4  
                       \
                        5 (root)
                         \
                          6    

                  1
                   \
                    2   
                     \   
                      3  
                       \
                        4  
                         \
                          5
                           \
                            6 (root)    
```

_**Time complexity: O(n)**_

## Summary
Recursive solution:
```c++
class Solution {
public:
    void flatten(TreeNode* root) {
        if(!root)
            return;
        flatten(root->right);
        flatten(root->left);
        root->right = pre;
        root->left = nullptr;
        pre= root;

    }

private:
    TreeNode* pre = nullptr;
};
```
But I consider that this solution can not be treated as `in-place` because the call stack is also an "additional" space.
