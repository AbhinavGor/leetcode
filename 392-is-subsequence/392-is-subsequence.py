class Solution:
    def isSubsequence(self, s: str, t: str) -> bool:
        if(len(s) == 0):
            return 1
        
        if(len(t) == 0):
            return 0
        
        s = list(s)[::-1]
        for i in t:
            if len(s) == 0:
                return 1
            if i == s[-1]:
                s.pop()
        
        if(len(s)):
            return 0
        else:
            return 1