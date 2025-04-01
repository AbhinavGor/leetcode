class Solution:
    def subarraySum(self, nums: List[int], k: int) -> int:
        res = s = 0

        m = defaultdict(int)

        # empty subarray has 0 sum
        m[0] = 1

        for i in nums:
            s += i

            if s - k in m:
                res += m[s-k]
            m[s] += 1
        return res