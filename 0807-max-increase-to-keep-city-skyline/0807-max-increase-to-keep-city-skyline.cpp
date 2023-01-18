class Solution {
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {
        vector<int> vMax, hMax;
        
        for(int i = 0; i < grid.size(); i++){
            hMax.push_back(grid[i][0]);
            for(int j = 1; j < grid[i].size(); j++){
                if(grid[i][j] > hMax[i]){
                    hMax[i] = grid[i][j];
                }
            }
        }
        
        for(int i = 0; i < grid[0].size(); i++){
            vMax.push_back(grid[0][i]);
            for(int j = 1; j < grid.size(); j++){
                if(grid[j][i] > vMax[i]){
                    vMax[i] = grid[j][i];
                }
            }
        }
        
//         cout<<"HMAX"<<endl;
//         for(int i = 0; i < hMax.size(); i++){
//             cout<<hMax[i]<<endl;
//         }
        
//         cout<<"VMAX"<<endl;
//         for(int i = 0; i < vMax.size(); i++){
//             cout<<vMax[i]<<endl;
//         }
        
        vector<vector<int>> res;
        vector<int> temp;
        
        int inc = 0;
        for(int i = 0; i < grid.size(); i++){
            for(int j = 0; j < grid[i].size(); j++){
                int t;
                if(hMax[i] >= vMax[j]){
                    t = vMax[j];
                    inc += t - grid[i][j];
                }else{
                    t = hMax[i];
                    inc += t - grid[i][j];
                }
            }
        }
        
        return inc;
    }
};