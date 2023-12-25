class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int>> res;
        vector<int> t;
        t.push_back(1);
        res.push_back(t);
        
        for(int i = 1 ; i < rowIndex + 1; i++) {
            vector<int> temp(i + 1, 0);
            temp[0] = 1;
            temp[i] = 1;
            for(int j = 1; j < i; j++) {
                temp[j] = res[i - 1][j] + res[i - 1][j - 1];
            }
            
            res.push_back(temp);
        }
        
        return res[rowIndex];
    }
};