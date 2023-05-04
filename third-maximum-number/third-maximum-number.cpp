class Solution {
public:
    int thirdMax(vector<int>& nums) {
         set<int> s;
        
        for(auto i:nums)
            s.insert(i);
        
        vector<int> res;
        
        for (auto it = s.begin(); it != s.end(); it++){
            res.push_back(*it);
        }
        
        if(res.size() >= 3){
            return res[res.size() - 3];
        }
        
        return res[res.size() - 1];
    }
};