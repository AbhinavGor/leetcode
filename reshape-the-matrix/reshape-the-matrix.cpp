class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int n = mat.size(), m = mat[0].size();
        
        if(n*m != r*c) return mat;
        
        vector<vector<int>> ans(r, vector<int>(c));
        
        for(int i = 0; i < r*c; i++)
               ans[i/c][i%c] = mat[i/m][i%m];
        
        return ans;
    }
};