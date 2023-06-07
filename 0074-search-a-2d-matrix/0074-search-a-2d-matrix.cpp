class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int t = 0, b = matrix.size() - 1, l = 0, r = matrix[0].size() - 1;
        return binSearch(matrix, t, b, l, r, target);        
    }
    
    bool binSearch(vector<vector<int>>& matrix, int t, int b, int l, int r, int x){
        if(b >= t){
            int mid = t + (b - t)/2;
            if(matrix[mid][0] <= x && matrix[mid][r] >= x){
                return tSearch(matrix[mid], l, r, x);
            }else if(matrix[mid][0] > x){
                return binSearch(matrix, t, mid - 1, l, r, x);
            }else if(matrix[mid][r] < x){
                return binSearch(matrix, mid + 1, b, l, r, x);
            }
        }
        return false;
    }
    
    bool tSearch(vector<int>& nums, int l, int r, int x){
        if(r >= l){
            int mid = l + (r - l)/2;
            
            if(nums[mid] == x)
                return true;
            if(nums[mid] < x)
                return tSearch(nums, mid + 1, r, x);
            if(nums[mid] > x)
                return tSearch(nums, l, mid - 1, x);
        }
        
        return false;
    }
};