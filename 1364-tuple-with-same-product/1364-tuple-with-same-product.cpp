class Solution {
public:
    int tupleSameProduct(vector<int>& nums) {
        unordered_map<int, set<pair<int, int>>> m;

        for(int i = 0; i < nums.size() - 1; i++) {
            for(int j = i + 1; j < nums.size(); j++) {
                m[nums[i] * nums[j]].insert({nums[i], nums[j]});
            }
        }

        int res = 0;

        for(auto i: m) {
            if(i.second.size() > 1) {
                res += fib(i.second.size())*8;
            }
        }

        return res;
    }

private:
    int fib(int n) {
        return n*(n-1)/2;
    }
};