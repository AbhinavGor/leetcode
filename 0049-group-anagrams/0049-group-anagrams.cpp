class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        string s;
        unordered_map<string, vector<string>> m;
        
        for(string i: strs){
            s = i;
            sort(begin(i), end(i));
            m[i].push_back(s);
        }
        
        vector<vector<string>> res;
        for(auto i: m){
            res.push_back(i.second);
        }
        
        return res;
    }
};