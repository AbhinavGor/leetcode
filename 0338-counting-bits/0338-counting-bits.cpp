class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> res;
        int pow = 1;
        res.push_back(0);
        
        for(int i = 1; i < n + 1; i++) {
            if(2*pow == i) pow = i;
            res.push_back(1 + res[i - pow]);
        }
        
        return res;
    }
};