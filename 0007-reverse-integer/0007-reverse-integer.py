class Solution:
    def reverse(self, x: int) -> int:
        res = 0
        isNeg = False

        if x < 0:
            isNeg = True
            x = -x

        while x:
            res *= 10
            res += x%10
            x = x//10
        
        if res > 2**31 - 1:
            return 0
        return -res if isNeg else res