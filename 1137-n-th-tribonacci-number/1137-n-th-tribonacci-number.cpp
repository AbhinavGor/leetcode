class Solution {
public:
    int tribonacci(int n) {
        vector<int> res;
        for(int i = 0; i < n + 1; i++) {
            if(i < 2) {
                res.push_back(i);
            }else if(i > 2) {
                res.push_back(res[i - 1] + res[i - 2] + res[i - 3]);
            } else {
                res.push_back(1);
            }
        }
        
        return res[n];
    }
};