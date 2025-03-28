class Solution:
    def searchRange(self, nums: List[int], target: int) -> List[int]:
        def find(isfirst):
            l, r = 0, len(nums) - 1
            while l <= r:
                m = l + (r-l)//2

                if nums[m] == target:
                    if isfirst:
                        if m == 0:
                            return m
                        elif m-1>=0 and nums[m-1] < target:
                            return m
                        else:
                            print(m)
                            print("HERE")
                            r = m - 1
                    else:
                        if m + 1 >= len(nums):
                            return m
                        elif m + 1 < len(nums) and nums[m+1] > target:
                            return m
                        else:
                            l = m + 1
                elif nums[m] < target:
                    l = m + 1
                else:
                    r = m - 1

            return -1
        lb = find(True)
        ub = find(False)

        return [lb, ub]
