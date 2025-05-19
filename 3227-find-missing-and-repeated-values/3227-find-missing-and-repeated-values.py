class Solution:
    def findMissingAndRepeatedValues(self, grid: List[List[int]]) -> List[int]:
        s = set()
        a = set()
        res = [0,0]

        for i in range(1, len(grid)**2 + 1):
            a.add(i)

        for row in grid:
            for num in row:
                if num in s:
                    res[0] = num
                else:
                    s.add(num)
                    a.remove(num)
        
        res[1] = a.pop()
        return res