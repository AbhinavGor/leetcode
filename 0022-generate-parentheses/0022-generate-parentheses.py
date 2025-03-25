class Solution:
    def generateParenthesis(self, n: int) -> List[str]:
        res = []
        def generate(p, o, c):
            if c == o == n:
                res.append(p)
                return

            if c < o:
                generate(p + ')', o, c+1)
            
            if o < n:
                generate(p + '(', o + 1, c)
        
        generate("(", 1, 0)

        return res