class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        int l = 0, t = 0, b = n, r = n;
        int curr = 0;
        
        vector<vector<int>> res(n, vector<int> (n, 0));
        
        while(l < r && t < b){
            for(int i = l; i < r; i++){
                res[t][i] = ++curr;
            }
            t++;
            
            for(int i = t; i < b; i++){
                res[i][r - 1] = ++curr;
            }
            r--;
            
            if(!(l < r && t < b))
                break;
            
            for(int i = r - 1; i >= l; i--){
                res[b - 1][i] = ++curr;
            }
            b--;
            
            for(int i = b - 1; i >= t; i--){
                res[i][l] = ++curr;
            }
            l++;
            
        }
        
        return res;
    }
};