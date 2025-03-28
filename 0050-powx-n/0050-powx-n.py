class Solution:
    def binExp(self, x, n):
        if n == 1:
            return x
        if n == 0:
            return 1
        
        if n < 0:
            return 1/self.binExp(x, -n)
        
        if n%2==1:
            return x*self.binExp(x*x, n//2)
        return self.binExp(x*x, n//2)

    def myPow(self, x: float, n: int) -> float:

        return self.binExp(x, n)