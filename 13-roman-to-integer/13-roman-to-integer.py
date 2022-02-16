class Solution:
    def romanToInt(self, s: str) -> int:
        roman = ['I', 'V', 'X', 'L', 'C', 'D', 'M']
        
        s = s[::-1]
        temp = roman.index(s[0])
        res = 0
        
        for i in s:
            t = 0
            if(i == "I"):
                t = 1
            elif(i == "V"):
                t = 5
            elif(i == "X"):
                t = 10
            elif(i == "L"):
                t = 50
            elif(i == "C"):
                t = 100
            elif(i == "D"):
                t = 500
            elif(i == "M"):
                t = 1000
            
            if(roman.index(i) >= temp):
                res += t
            else:
                res -= t
            
            temp = roman.index(i)
        
        return res         
                
        