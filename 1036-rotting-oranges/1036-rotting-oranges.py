class Solution:
    def orangesRotting(self, grid: List[List[int]]) -> int:
        q = deque()

        time, fresh = 0, 0

        R, C = len(grid), len(grid[0])
        for r in range(R):
            for c in range(C):
                if grid[r][c] == 1:
                    fresh += 1
                if grid[r][c] == 2:
                    q.append([r, c])
        dirs = [[0,1], [0, -1], [1,0], [-1,0]]

        while q and fresh > 0:
            for i in range(len(q)):
                r, c = q.popleft()
                for dr, dc in dirs:
                    row, col = r+dr, c+dc
                    if col >= 0 and row >= 0 and row < len(grid) and col < len(grid[0]) and grid[row][col] == 1:
                        grid[row][col] = 2
                        q.append([row, col])
                        fresh -= 1
                    else:
                        continue
            time += 1
        if fresh > 0:
            return -1
        return time