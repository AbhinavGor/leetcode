# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def addTwoNumbers(self, l1: Optional[ListNode], l2: Optional[ListNode]) -> Optional[ListNode]:
        res = ListNode(0)
        res_copy = res

        carry = 0

        while l1 or l2:
            if l1:
                res_copy.val += l1.val
                l1 = l1.next
            if l2:
                res_copy.val += l2.val
                l2 = l2.next
            
            res_copy.val += carry

            carry = 0

            if res_copy.val >= 10:
                carry = res_copy.val//10
                res_copy.val %= 10            

            if l1 != None or l2 !=None:
                res_copy.next = ListNode(0)
                res_copy = res_copy.next
            elif carry:
                res_copy.next = ListNode(carry)
            
        return res    
