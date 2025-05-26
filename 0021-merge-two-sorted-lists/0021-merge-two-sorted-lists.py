# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def mergeTwoLists(self, l1: Optional[ListNode], l2: Optional[ListNode]) -> Optional[ListNode]:
        res = ListNode()
        copy = res

        while l1 and l2:
            if l1.val < l2.val:
                res.next = ListNode(l1.val)
                res = res.next

                l1 = l1.next
            else:
                res.next = ListNode(l2.val)
                res = res.next

                l2 = l2.next
        
        while l1:
            res.next = ListNode(l1.val)
            res = res.next

            l1 = l1.next

        while l2:
            res.next = ListNode(l2.val)
            res = res.next

            l2 = l2.next
        return copy.next