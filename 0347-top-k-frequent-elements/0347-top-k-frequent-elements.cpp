class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> m;
        for(int i: nums) {
            m[i] += 1;
        }
        vector<pair<int,int>> v;
        
        for(auto i:  m) {
            v.push_back({i.second, i.first});
        }

        sort(v.begin(), v.end());

        vector<int> res;
        
        for(int i = 0; i < k; i++) {
            res.push_back(v[v.size() - 1 - i].second);
        }

        return res;
    }
};