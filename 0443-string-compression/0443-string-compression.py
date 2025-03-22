class Solution:
    def compress(self, chars: List[str]) -> int:
        prev = ''
        l = 0
        res = []
        for c in chars:
            if c != prev:
                if l > 1:
                    res.extend(list(str(l)))
                l = 1
                res.append(c+"")
                prev = c
            else:
                l+=1
        
        if l > 1:
            res.extend(list(str(l)))
        
        for i in range(len(res)):
            chars[i] = res[i]
        return len(res)
