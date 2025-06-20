class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        currPrice = prices[0]
        res = 0

        for i in prices:
            if i < currPrice:
                currPrice = i
            else:
                res = max(res, i - currPrice)
        
        return res