class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int res = 0;
        for(int i = 0; i < mat.size(); i++){
            res  += mat[i][i];
            res += mat[i][mat.size() - 1 - i];
        }
        
        if(mat.size() % 2 == 1){
            res -= mat[mat.size()/2][mat.size()/2];
        }
        
        return res;
    }
};