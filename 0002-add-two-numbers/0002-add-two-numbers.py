# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def addTwoNumbers(self, l1: Optional[ListNode], l2: Optional[ListNode]) -> Optional[ListNode]:
        head = ListNode()
        res = head
        carry = curr = 0

        while l1 and l2:
            curr = l1.val + l2.val + carry
            carry = curr//10
            curr = curr%10
            head.val = curr

            l1 = l1.next
            l2 = l2.next

            if l1 or l2:
                head.next = ListNode()
                head = head.next
        
        while l1:
            curr = l1.val + carry
            carry = curr//10
            curr = curr%10
            head.val = curr

            l1 = l1.next

            if l1:
                head.next = ListNode()
                head = head.next
        
        while l2:
            curr = l2.val + carry
            carry = curr//10
            curr = curr%10
            head.val = curr

            l2 = l2.next

            if l2:
                head.next = ListNode()
                head = head.next

        if carry:
            head.next = ListNode()
            head = head.next
            head.val = carry
        return res