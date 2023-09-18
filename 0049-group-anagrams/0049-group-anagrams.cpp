class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> count;
        vector<vector<string>> res;
        
        for(int i = 0; i < strs.size(); i++) {
            string temp = strs[i];
            sort(begin(temp), end(temp));
            count[temp].push_back(strs[i]);
        }
        
        for(auto it: count) {
            vector<string> words = it.second;
            res.push_back(words);
        }
        
        return res;
    }
};