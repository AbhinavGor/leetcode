class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix[0].size(), n = matrix.size();
        for(int i = 0; i < matrix.size(); i++){
            if((target >= matrix[i][0]) && (target <= matrix[i][m - 1])){
                for(int j = 0; j < m; j++){
                    if(matrix[i][j] == target){
                         return true;
                    }
                }
            }
        }
        
        return false;
    }
};