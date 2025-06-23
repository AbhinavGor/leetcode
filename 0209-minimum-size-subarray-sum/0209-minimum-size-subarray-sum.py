class Solution:
    def minSubArrayLen(self, target: int, nums: List[int]) -> int:
        l = 0

        curr_sum = 0
        curr_result = len(nums)+1

        for r in range(len(nums)):
            curr_sum += nums[r]
            while curr_sum >= target and l <= r:
                curr_result = min(curr_result, (r - l+1))
                curr_sum -= nums[l]
                l += 1
        
        return curr_result if curr_result != len(nums) + 1 else 0