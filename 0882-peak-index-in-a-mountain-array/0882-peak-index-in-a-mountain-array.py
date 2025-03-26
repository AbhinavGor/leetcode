class Solution:
    def peakIndexInMountainArray(self, arr: List[int]) -> int:
        l, r = 0, len(arr) - 1

        while l <= r:
            m = l + (r-l)//2

            if arr[m-1] < arr[m] and arr[m] > arr[m+1]:
                return m
            
            if arr[m] > arr[m+1]:
                r = m
            else:
                l = m