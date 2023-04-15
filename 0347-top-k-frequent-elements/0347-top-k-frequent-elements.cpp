class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> m;
        for(int i = 0; i < nums.size(); i++)
            m[nums[i]]++;
        
        vector<vector<int>> b(nums.size()+1);
        
        for(auto x: m){
            b[x.second].push_back(x.first);
        }
        
        vector<int> res;
        for(int i = nums.size(); i >= 0; i--){
            if(res.size() >= k){
                break;
            }
            
            res.insert(res.end(), b[i].begin(), b[i].end());
            
        }
        
        return res;
    }
};