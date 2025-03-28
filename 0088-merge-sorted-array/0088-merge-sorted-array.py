class Solution:
    def merge(self, nums1: List[int], m: int, nums2: List[int], n: int) -> None:
        """
        Do not return anything, modify nums1 in-place instead.
        """
        a, b = m-1, n-1

        for i in range(a+b+1, -1, -1):
            if b >= 0 and a >= 0:
                if nums2[b] > nums1[a]:
                    nums1[i] = nums2[b]
                    b-=1
                else:
                    nums1[i] = nums1[a]
                    a-=1
            elif a >= 0:
                nums1[i] = nums1[a]
                a-=1
            elif b >= 0:
                nums1[i] = nums2[b]
                b-=1
