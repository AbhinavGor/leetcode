class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        vector<vector<int>> res;
        vector<int> temp;
        
        for(int i = 1; i <= 500; i++){
            for(int j = 0; j < groupSizes.size(); j++){
                if(i == groupSizes[j]){
                    temp.push_back(j);
                }
                if(temp.size() == i){
                    res.push_back(temp);
                    temp.clear();
                }
            }
        }
        
        return res;
    }
};