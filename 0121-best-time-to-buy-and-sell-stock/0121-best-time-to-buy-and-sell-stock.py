class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        currPrice = prices[0]
        profit = 0

        for p in prices[1:]:
            if p < currPrice:
                currPrice = p
            else:
                profit = max(profit, p - currPrice)
        return profit