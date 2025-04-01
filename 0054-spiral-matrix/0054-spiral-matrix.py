class Solution:
    def spiralOrder(self, matrix: List[List[int]]) -> List[int]:
        l, r = 0, len(matrix[0])
        t, b = 0,len(matrix)
        
        res = []

        while l < r and t < b:
            # left to right
            for i in range(l, r):
                res.append(matrix[t][i])
            # done with top row
            t += 1

            # go through right col
            for i in range(t, b):
                res.append(matrix[i][r-1])

            # done with rightmost col
            r -= 1

            if not(l < r and t < b):
                break

            # go through the bottom col
            for i in range(r-1, l-1, -1):
                res.append(matrix[b-1][i])
            
            # done with the bottom row
            b -= 1

            # go through the left col
            for i in range(b-1, t-1, -1):
                res.append(matrix[i][l])
            
            # done with the lefft col
            l += 1
        return res