class Solution:
    def kClosest(self, points: List[List[int]], k: int) -> List[List[int]]:
        heap = []
        for pt in points:
            x, y = pt
            heapq.heappush(heap, [-(x**2+y**2), pt])
            while len(heap) > k:
                heapq.heappop(heap)
        return [pt[1] for pt in heap]