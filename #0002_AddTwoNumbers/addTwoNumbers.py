# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def addTwoNumbers(self, l1: ListNode, l2: ListNode) -> ListNode:
        head = ListNode(0);
        temp=head

        carry = 0
        while l1 and l2:
            carry += l1.val+l2.val
            l1.val=carry%10
            carry//=10
            temp.next=l1
            temp=temp.next
            l1=l1.next
            l2=l2.next
        while l1:
            carry+=l1.val
            l1.val=carry%10
            carry//=10
            temp.next=l1
            temp=temp.next
            l1=l1.next
        while l2:
            carry+=l2.val
            l2.val=carry%10
            carry//=10
            temp.next=l2
            temp=temp.next
            l2=l2.next
        if carry:
            temp.next=ListNode(carry)
        return head.next
