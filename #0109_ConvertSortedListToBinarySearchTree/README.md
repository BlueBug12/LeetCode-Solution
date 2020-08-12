# [109. Convert Sorted List to Binary Search Tree](https://leetcode.com/problems/convert-sorted-list-to-binary-search-tree/)

## Description

<div class="content__u3I1 question-content__JfgR"><div><p>Given a singly linked list where elements are sorted in ascending order, convert it to a height balanced BST.</p>

<p>For this problem, a height-balanced binary tree is defined as a binary tree in which the depth of the two subtrees of <em>every</em> node never differ by more than 1.</p>

<p><strong>Example:</strong></p>

<pre>Given the sorted linked list: [-10,-3,0,5,9],

One possible answer is: [0,-3,9,-10,null,5], which represents the following height balanced BST:

      0
     / \
   -3   9
   /   /
 -10  5
</pre>
</div></div>

## Solution
Due to the characteristic of `linked list`, we have can't directly get the middle position of the list by the index (of course they don't have index). In this kind of data structure, I consider that the best solution still takes _**O(nlogn)**_ time complexity. But there existes another clever solution. That is, pass the whole list and convert it to vector. This process takes _**O(n)**_ time complexity. Then we can just apply the previous solution [108. Convert Sorted Array to Binary Search Tree](https://github.com/BlueBug12/LeetCode-Solution/tree/master/%230108_ConvertSortedArrayToBinarySearchTree).

_**Time complexity: O(n)**_

## Summary
Here is the solution using pure `linked-list` provided by [zhangyu917
](https://leetcode.com/problems/convert-sorted-list-to-binary-search-tree/discuss/35555/Clean-C%2B%2B-solution.-Recursion.-O(nlogn).-With-comment). Notict that the ingenious design of pointers _fast_ and _slow_. With these two pointes, we can locate the middle position of the `linked-list` in _**O(logn)**_ time complexity.

```cpp
class Solution {
    public:
        TreeNode *sortedListToBST(ListNode *head) {
            if(!head) return NULL;
            if(!head->next) return new TreeNode(head->val);

            // fast/slow pointer to find the midpoint
            auto slow = head;
            auto fast = head;
            auto pre = head;
            while(fast && fast->next) {
                pre = slow;
                slow = slow->next;
                fast = fast->next->next;
            }
            pre->next = 0; // break two halves

            // slow is the midpoint, use as root
            TreeNode* root = new TreeNode(slow->val);
            root->left = sortedListToBST(head);
            root->right = sortedListToBST(slow->next);

            return root;
        }
    };
```
