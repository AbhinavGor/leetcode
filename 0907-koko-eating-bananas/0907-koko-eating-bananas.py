class Solution:
    def minEatingSpeed(self, piles: List[int], h: int) -> int:
        l, r = 1, max(piles)
        res = r

        while l <= r:
            m = l + (r-l)//2
            s = 0
            for i in piles:
                s += math.ceil(i/m)
            
            if s <= h:
                res = min(res, m)
                r = m - 1
            elif s > h:
                l = m+1
            else:
                r = m - 1
        return res