class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int rows = matrix.size(), cols = matrix[0].size();
        vector<int> d1(rows, -1), d2(cols, -1);
        
        for(int i = 0; i < rows; i++){
            for(int j = 0; j < cols; j++){
                if(matrix[i][j] == 0){
                    d1[i] = 0;
                    d2[j] = 0;
                }
            }
        }
        
        for(int i = 0; i < rows; i++){
            for(int j = 0; j < cols; j++){
                if(d1[i] == 0 || d2[j] == 0){
                    matrix[i][j] = 0;
                }
            }
        }
    }
};