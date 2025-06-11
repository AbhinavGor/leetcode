class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        ptr = 0
        
        for i in range(1, len(nums)):
            if nums[i] == nums[ptr]:
                continue
            else:
                ptr += 1
                nums[ptr] = nums[i]
        
        return ptr+1
