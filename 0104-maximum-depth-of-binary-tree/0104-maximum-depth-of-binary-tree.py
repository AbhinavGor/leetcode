# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def computeMx(self, root, d):
        if root:
            return max(self.computeMx(root.left, d+1), self.computeMx(root.right, d+1))
        return d

    def maxDepth(self, root: Optional[TreeNode]) -> int:
        d = 0
        if root:
            return max(self.computeMx(root.left, 1), self.computeMx(root.right, 1))
        return d