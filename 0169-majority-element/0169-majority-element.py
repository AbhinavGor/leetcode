class Solution:
    def majorityElement(self, nums: List[int]) -> int:
        freq = []

        c = Counter(nums)
        for k, v in c.items():
            if v > len(nums)/2:
                return k