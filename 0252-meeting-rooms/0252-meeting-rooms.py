class Solution:
    def canAttendMeetings(self, intervals: List[List[int]]) -> bool:
        if not intervals:
            return True

        intervals.sort()
        
        pq = [intervals[0][1]]

        for i in intervals[1:]:
            if pq[0] <= i[0]:
                heapq.heappop(pq)
            heapq.heappush(pq, i[1])
        return len(pq) <= 1