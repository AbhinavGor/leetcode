class Solution:
    def mergeAlternately(self, word1: str, word2: str) -> str:
        res = ""

        l1, l2 = len(word1), len(word2)
        a, b = 0, 0

        while a < l1 and b < l2:
            if len(res)%2:
                res += word2[b]
                b += 1
            else:
                res += word1[a]
                a += 1

        while a < l1:
            res += word1[a]
            a += 1
        
        while b < l2:
            res += word2[b]
            b += 1
        return res