class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<int>> res;
        vector<int> temp;
        unordered_map<int, int> m;
        
        for(auto i:nums1){
            m[i] = 1;
        }
        
        for(auto i:nums2){
            if(m[i] == 1 || m[i] == 3){
                m[i] = 3;
            }else{
                m[i] = 2;
            }
        }
        
        for(auto i:nums1){
            if(m[i] == 1){
                temp.push_back(i);
                m[i] = 0;
            }
        }
        
        res.push_back(temp);
        
        temp = {};
        
        for(auto i:nums2){
            if(m[i] == 2){
                temp.push_back(i);
                m[i] = 0;
            }
        }
        
        res.push_back(temp);
        
        return res;
    }
};