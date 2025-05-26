# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def addTwoNumbers(self, l1: Optional[ListNode], l2: Optional[ListNode]) -> Optional[ListNode]:
        head = ListNode(0)
        res = head
        carry = 0

        while l1 and l2:
            head.val = l1.val + l2.val + carry

            carry = head.val//10
            head.val %= 10

            l1 = l1.next
            l2 = l2.next

            if l1 or l2:
                head.next = ListNode(0)
                head = head.next
            else:
                if carry:
                    head.next = ListNode(carry)
        
        rem = l1 if l1 != None else l2

        while rem != None:
            head.val = rem.val + carry
            carry = head.val // 10
            head.val %= 10

            rem = rem.next
            if rem:
                head.next = ListNode(0)
                head = head.next
            else:
                if carry:
                    head.next = ListNode(carry)
        
        return res