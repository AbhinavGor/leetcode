class Solution:
    def isValidSudoku(self, board: List[List[str]]) -> bool:
        # check rows and cols
        rows = defaultdict(set)
        cols = defaultdict(set)
        for r in range(len(board)):
            for c in range(len(board[r])):
                if (board[r][c] in rows[r] or board[r][c] in cols[c]) and board[r][c] != ".":
                    return False
                rows[r].add(board[r][c])
                cols[c].add(board[r][c])
        
        # check 3x3 boxes
        boxes = defaultdict(set)
        for R in range(0, len(board), 3):
            for C in range(0, len(board), 3):
                for r in range (R, R+3):
                    for c in range(C, C+3):
                        if board[r][c] in boxes[(R,C)] and board[r][c] != ".":
                            return False
                        if board[r][c] != ".":
                            boxes[(R,C)].add(board[r][c])
        print(boxes)

        return True