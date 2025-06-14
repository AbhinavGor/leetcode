class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        res = 0
        se = set()

        l = 0
        r = 0
        while r < len(s):
            if s[r] in se:
                l += 1
                r = l
                res = max(res, len(se))
                print(r, res)
                se = set()
            se.add(s[r])

            r += 1
        
        return max(len(se), res)