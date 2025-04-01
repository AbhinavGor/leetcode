class Solution:
    def generate(self, numRows: int) -> List[List[int]]:
        res = []
        for i in range(numRows):
            temp = [1]*(i+1)
            for j in range(1, len(temp)-1):
                print(i,j)
                temp[j] = res[i-1][j] + res[i-1][j-1]
            res.append(temp)
        return res
