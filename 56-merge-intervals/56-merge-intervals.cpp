class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> res;
        
        for(int i = 0; i < intervals.size(); i++){
            for(int j = i + 1; j < intervals.size(); j++){
                if(intervals[j][0] < intervals[i][0]){
                    swap(intervals[j], intervals[i]);
                }
            }
        }
        
        for(int i = 0; i < intervals.size(); i++){
            int n = res.size();
            if(n == 0){
                res.push_back(intervals[i]);
            }else if((res[n-1][0] <= intervals[i][0]) && (res[n-1][1] >= intervals[i][0])){
                if(res[n-1][1] < intervals[i][1]){
                    res[n-1][1] = intervals[i][1];
                }
            }else{
                res.push_back(intervals[i]);
            }
            
        }
        
        return res;
    }
};