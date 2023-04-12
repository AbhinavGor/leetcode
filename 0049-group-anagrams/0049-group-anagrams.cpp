class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> m;
        
        for(int i = 0; i < strs.size(); i++){
            vector<int> count(26);
            
            for(int j = 0; j < strs[i].size(); j++){
                count[strs[i][j] - 'a']++;
            }
            
            string key = "";
            
            for(int j = 0; j < count.size(); j++){
                key += (to_string(count[j]) + "a");
            }
            m[key].push_back(strs[i]);
        }
        
        vector<vector<string>> res;
        for(auto i: m)
            res.push_back(i.second);
        
        return res;
    }
};