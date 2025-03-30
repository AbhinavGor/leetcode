class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        l = min([len(s) for s in strs])
        c = 0
        res = ""
        while c <= l:
            pre = strs[0][:c]
            if all([i.startswith(pre) for i in strs]):
                res = pre
            c += 1
        return res