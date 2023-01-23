class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int res = 0, rule;
        if(ruleKey == "type"){
            rule = 0;
        }else if(ruleKey == "color"){
            rule = 1;
        }else{
            rule = 2;
        }
        
        for(int i = 0; i < items.size(); i++){
            if(items[i][rule] == ruleValue)
                res++;
        }
        
        return res;
    }
};