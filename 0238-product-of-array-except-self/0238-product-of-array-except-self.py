class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        pre = [1]*(len(nums)+1)
        post = [1]*(len(nums)+1)

        for i in range(0, len(nums)):
            pre[i+1] = pre[i]*nums[i]
        
        for i in range(len(nums) - 1, -1, -1):
            post[i-1] = post[i]*nums[i]

        for i in range(len(nums)):
            nums[i] = pre[i]*post[i]

        return nums

