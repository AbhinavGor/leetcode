class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        anag = defaultdict(list)

        for i in strs:
            temp = sorted(i)
            anag[''.join(temp)].append(i)
        res = []
        for i in anag:
            res.append(anag[i])
        return res