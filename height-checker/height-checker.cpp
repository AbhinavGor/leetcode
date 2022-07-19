class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int n = 0;
        vector<int> dup;
        
        for(int i = 0; i < heights.size(); i++){
            dup.push_back(heights[i]);
        }
        
        for(int i = 0; i < heights.size() - 1; i++){
            for(int j = i + 1; j < heights.size(); j++){
                if(heights[i] > heights[j]){
                    heights[i] += heights[j];
                    heights[j] = heights[i] - heights[j];
                    heights[i] = heights[i] - heights[j];
                }
            }
        }
        
        for(int i = 0; i < heights.size(); i++){
            if(heights[i] != dup[i]){
                n++;
            }
        }
        
        return n;
    }
};