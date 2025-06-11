class Solution:
    def mergeAlternately(self, word1: str, word2: str) -> str:
        res = ""
        a, b = 0, 0
        l1, l2 = len(word1), len(word2)

        while a < l1 and b < l2:
            if len(res)%2 == 0:
                res += word1[a]
                a += 1
            else:
                res += word2[b]
                b += 1
        
        while a < l1:
            res += word1[a]
            a += 1
        while b < l2:
            res += word2[b]
            b += 1
        
        return res

        return res