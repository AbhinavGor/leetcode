class Solution:
    def singleNumber(self, nums: List[int]) -> List[int]:
        res = []
        nums.sort()
        
        for i in range(0, len(nums)):
            if len(res) == 2:
                break
            if i == 0 and i + 1 < len(nums) and nums[i] != nums[i+1]:
                    res.append(nums[i])
            elif i == len(nums) - 1 and i - 1 >= 0 and nums[i-1] != nums[i]:
                res.append(nums[i])
            else:
                if nums[i-1] != nums[i] and nums[i] != nums[i+1]:
                    res.append(nums[i])
        
        return res
                