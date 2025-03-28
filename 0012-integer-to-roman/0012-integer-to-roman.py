class Solution:
    def intToRoman(self, num: int) -> str:
        m = {
            1: "I",
            4: "IV",
            5: "V",
            9: "IX",
            10: "X",
            40: "XL",
            50: "L",
            90: "XC",
            100: "C",
            400: "CD",
            500: "D",
            900: "CM",
            1000: "M"
        }
        mk = list(m.keys())[::-1]
        
        res = ""

        for k in mk:
            if num//k:
                res += m[k]*(num//k )
                num %= k
        return res