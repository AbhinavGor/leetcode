class Solution:
    def minMeetingRooms(self, intervals: List[List[int]]) -> int:
        rooms = []
        intervals.sort()
        rooms_req = 0
        for i in intervals:
            print(rooms)
            if not rooms or rooms[0] > i[0]:
                heapq.heappush(rooms, i[1])
            else:
                while rooms and rooms[0] <= i[0]:
                    heapq.heappop(rooms)
                heapq.heappush(rooms, i[1])
            rooms_req = max(rooms_req, len(rooms))
        
        return rooms_req