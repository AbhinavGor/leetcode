class Solution:
    def maxProduct(self, nums: List[int]) -> int:
        res = max(nums)
        currMin, currMax = 1, 1
        for n in nums:
            tmp = n*currMax
            currMax = max([n*currMax, n*currMin, n])
            currMin = min([n*currMin, tmp, n])
            res = max(currMax, currMin, res)
        return res
        