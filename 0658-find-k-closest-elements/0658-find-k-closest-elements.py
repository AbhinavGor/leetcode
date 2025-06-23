class Solution:
    def findClosestElements(self, arr: List[int], k: int, x: int) -> List[int]:
        diff_arr = [0]*len(arr)
        for i in range(len(arr)):
            diff_arr[i] = [abs(arr[i] - x), arr[i]]

        diff_arr.sort()

        for i in range(k):
            diff_arr[i] = diff_arr[i][1]
        
        res = diff_arr[:k]
        res.sort()
        return res