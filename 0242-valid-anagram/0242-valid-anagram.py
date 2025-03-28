class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        if len(s) < len(t):
            s, t = t, s
        s_map = defaultdict(int)
        t_map = defaultdict(int)
        for c in s:
            s_map[c]+=1
        for c in t:
            t_map[c]+=1
        
        for c in s_map:
            if c not in t_map:
                return False
            if s_map[c] != t_map[c]:
                return False
        return True