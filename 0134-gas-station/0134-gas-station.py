class Solution:
    def canCompleteCircuit(self, gas: List[int], cost: List[int]) -> int:
        total_gain = sum(gas) - sum(cost)
        if total_gain < 0:
            return -1
        
        ans, curr_gain = 0, 0

        for i in range(len(gas)):
            curr_gain += gas[i] -  cost[i]

            if curr_gain < 0:
                ans = i + 1
                curr_gain = 0
        return ans