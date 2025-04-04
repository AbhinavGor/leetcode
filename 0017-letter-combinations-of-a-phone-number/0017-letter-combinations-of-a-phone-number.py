class Solution:
    def letterCombinations(self, digits: str) -> List[str]:
        alpha = {
            '2': "abc",
            '3': "def",
            '4': "ghi",
            '5': "jkl",
            '6': "mno",
            '7': "pqrs",
            '8': "tuv",
            '9': "wxyz"
        }

        res = []
        
        def backtrack(i, s):
            if len(s) == len(digits):
                if s != "":res.append(s)
                return
            
            for a in alpha[digits[i]]:
                for c in a.split():
                    backtrack(i+1, s+c)

        backtrack(0, "")
        return res