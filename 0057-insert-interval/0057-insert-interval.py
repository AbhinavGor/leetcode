class Solution:
    def insert(self, intervals: List[List[int]], newInterval: List[int]) -> List[List[int]]:
        res = []
        intervals.append(newInterval)
        
        intervals.sort()

        iq = deque(intervals)

        while iq:
            curr = iq.popleft()
            if not res or res[-1][1] < curr[0]:
                res.append(curr)
            else:
                res[-1] = [min(res[-1][0], curr[0]), max(curr[1], res[-1][1])]
        return res