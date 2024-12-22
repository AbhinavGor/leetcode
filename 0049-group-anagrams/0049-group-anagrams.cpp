class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> m;
        for(int i = 0; i < strs.size(); i++) {
            string temp = strs[i];
            sort(temp.begin(), temp.end());
            
            if(!m[temp].size()){
                m[temp] = {strs[i]};
            } else {
                m[temp].push_back(strs[i]);
            }
        }
        vector<vector<string>> res;
        
        for(auto item : m) {
            res.push_back(item.second);
        }
        
        return res;
    }
};