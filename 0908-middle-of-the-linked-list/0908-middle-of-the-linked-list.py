# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def middleNode(self, head: Optional[ListNode]) -> Optional[ListNode]:
        l = 0
        head_copy = head
        while head:
            l += 1
            head = head.next
        
        l //= 2
        
        head = head_copy
        
        while l > 0:
            print(l, head.val)
            l -= 1
            head = head.next
        return head
