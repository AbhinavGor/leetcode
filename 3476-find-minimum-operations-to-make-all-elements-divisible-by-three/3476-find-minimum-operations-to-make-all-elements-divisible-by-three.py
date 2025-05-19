class Solution:
    def minimumOperations(self, nums: List[int]) -> int:
        res = 0

        for i in nums:
            res += min(i%3, 3 - i%3)
        
        return res