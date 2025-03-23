class Solution:
    def sortColors(self, nums: List[int]) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        m = defaultdict(int)

        for i in nums: m[i]+=1
        prev_freq = 0
        for i in range(3):
            freq = m[i]
            nums[prev_freq:] = [i]*freq
            
            prev_freq+=freq