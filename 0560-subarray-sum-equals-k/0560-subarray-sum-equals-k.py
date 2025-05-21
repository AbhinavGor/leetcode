class Solution:
    def subarraySum(self, nums: List[int], k: int) -> int:
        res = s = 0
        m = defaultdict(int)

        m[0] = 1

        for num in nums:
            s += num

            if s-k in m:
                res += m[s-k]
            m[s] += 1
        
        return res
        