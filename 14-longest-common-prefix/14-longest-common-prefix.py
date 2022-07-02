class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        if(len(strs) == 1):
            return strs[0]
        
        minl = min(list(map(lambda x: len(x), strs)))
        n = 0;
        
        for i in range(1, minl + 1):
            ex = strs[0][:i]
            temp = list(map(lambda x: x[:i] == ex, strs))
            print(list(map(lambda x: x[:i], strs)))
            
            if(all(temp)):
                n = i
        
        return strs[0][:n]
        