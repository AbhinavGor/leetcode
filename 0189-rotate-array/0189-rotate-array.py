class Solution:
    def rotate(self, nums: List[int], k: int) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        def reverse(s, e):
            while s < e:
                nums[s], nums[e] = nums[e], nums[s]
                s += 1
                e -= 1

        n = len(nums)
        if k == n:
            return nums
        if k > n:
            k = k%n
            
        if k == 0:
            return nums

        reverse(0, n-1)

        reverse(0, k-1)
        reverse(k, n-1)
        