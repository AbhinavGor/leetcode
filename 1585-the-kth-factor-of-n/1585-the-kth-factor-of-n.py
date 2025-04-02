class Solution:
    def kthFactor(self, n: int, k: int) -> int:
        numFactors = 0
        for i in range(1, n+1):
            if n%i == 0:
                numFactors += 1
                if numFactors == k:
                    return i
        return -1