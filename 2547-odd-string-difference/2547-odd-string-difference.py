class Solution:
    def oddString(self, words: List[str]) -> str:
        diff = []

        for i in range(len(words)):
            s = words[i]
            vect = []
            for i in range(len(s) - 1):
                vect.append(ord(s[i + 1]) - ord(s[i]))
            diff.append(vect)

        for i in range(len(diff)):
            if diff.count(diff[i]) == 1:
                return words[i]
        
        return ""