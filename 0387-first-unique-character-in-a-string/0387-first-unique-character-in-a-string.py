class Solution:
    def firstUniqChar(self, s: str) -> int:
        m = defaultdict(int)
        for c in s:
            m[c] += 1
        
        for i, c in enumerate(list(s)):
            if m[c] == 1:
                return i
        return -1