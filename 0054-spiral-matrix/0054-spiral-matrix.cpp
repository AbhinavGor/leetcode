class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int l = 0, r = matrix[0].size(), t = 0, b = matrix.size();
        vector<int> res;
        
        cout<<l<<r<<t<<b<<endl;
        while(l < r && t < b){
            for(int i = l; i < r; i++){
                cout<<1;
               res.push_back(matrix[t][i]); 
            }
            t++;
            for(int i = t; i < b; i++){
                cout<<2;
                res.push_back(matrix[i][r - 1]);
            }
            r--;
            
            if(!(l < r && t < b)){
                break;
            }
            
            for(int i = r - 1; i >= l; i--){
                cout<<3;
                res.push_back(matrix[b - 1][i]);
            }
            b--;
            for(int i = b - 1; i >= t; i--){
                cout<<4;
                res.push_back(matrix[i][l]);
            }
            l++;
        }
        
        return res;
    }
};