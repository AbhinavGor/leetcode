class Solution:
    def rotate(self, matrix: List[List[int]]) -> None:
        """
        Do not return anything, modify matrix in-place instead.
        """
        # Tranpose and reverse each row
        # Transpose
        for r in range(len(matrix)):
            for c in range(r, len(matrix)):
                matrix[r][c], matrix[c][r] = matrix[c][r], matrix[r][c]
        
        for r in matrix:
            r.reverse()