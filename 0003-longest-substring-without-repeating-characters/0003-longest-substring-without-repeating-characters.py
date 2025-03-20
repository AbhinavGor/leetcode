class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        curr = set()
        res = 0
        curr_ind = 0
        i=0
        while i < len(s):
            if s[i] in curr:
                print(curr)
                res = max(res, len(curr))
                curr = set()
                curr_ind+=1
                i = curr_ind
            if i < len(s):
                curr.add(s[i])
            i+=1
        
        return max(res, len(curr))