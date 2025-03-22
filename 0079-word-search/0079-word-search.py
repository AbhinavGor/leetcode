class Solution:
    def __init__(self):
        self.curr_word = ""
    def exist(self, board: List[List[str]], word: str) -> bool:
        R, C = len(board), len(board[0])
        path = set()

        def dfs(curr_pos, i):
            if i == len(word):
                return True
            
            r, c = curr_pos

            if r < 0 or c < 0 or r >= R or c >= C or word[i] != board[r][c] or curr_pos in path:
                return False
            
            path.add((r, c))
            res = (dfs((r + 1, c), i+1) or
                    dfs((r - 1, c), i + 1) or
                    dfs((r, c + 1), i + 1) or
                    dfs((r, c - 1), i + 1))
            path.remove((r, c))

            return res

        for r in range(R):
            for c in range(C):
                if dfs((r, c), 0):
                    return True
        
        return False