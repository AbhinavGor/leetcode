class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        vector<vector<int>> res;
        unordered_map<int, vector<int>> temp;
        vector<vector<int>> vec;
        
        for(int j = 0; j < groupSizes.size(); j++){
            temp[groupSizes[j]].push_back(j);
        }
        
        for(auto x : temp){
            if(x.second.size() == x.first){
                res.push_back(x.second);
            }else{
                vector<int> a;
                for(int j = 0; j < x.second.size(); j++){
                    a.push_back(x.second[j]);
                    if(a.size() == x.first){
                        res.push_back(a);
                        a.clear();
                    }
                }
            }
        }
        
        return res;
    }
};