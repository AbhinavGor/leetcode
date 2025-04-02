# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    def hasCycle(self, head: Optional[ListNode]) -> bool:
        if not head:
            return False
        fast = head.next
        slow = head

        while fast and slow:
            if fast == slow:
                return True
            if not fast.next:
                break
            fast = fast.next.next
            slow = slow.next
        return False
