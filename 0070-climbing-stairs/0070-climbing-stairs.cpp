class Solution {
public:
    int climbStairs(int n) {
        unordered_map<int, int> res;
        
        res[1] = 1;
        res[2] = 2;
        
        for(int i = 3; i < n + 1; i++) {
            res[i] = res[i - 1] + res[i - 2];
        }
        
        return res[n];
    }
};