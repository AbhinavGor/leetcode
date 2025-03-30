class Solution:
    def numIslands(self, grid: List[List[str]]) -> int:
        if not grid:
            return 0
        R, C = len(grid), len(grid[0])
        visited = set()
        islands = 0
        def bfs(r, c):
            visited.add((r, c))
            if r + 1 < R and grid[r+1][c] == "1" and (r+1,c) not in visited:
                bfs(r+1, c)
            if c + 1 < C and grid[r][c+1] == "1" and (r,c+1) not in visited:
                bfs(r, c+1)
            if r - 1 >= 0 and grid[r-1][c] == "1" and (r-1,c) not in visited:
                bfs(r-1, c)
            if c - 1 >= 0 and grid[r][c-1] == "1" and (r,c-1) not in visited:
                bfs(r, c-1)

        for r in range(R):
            for c in range(C):
                if grid[r][c] == "1" and (r, c) not in visited:
                    bfs(r, c)
                    islands += 1
        return islands