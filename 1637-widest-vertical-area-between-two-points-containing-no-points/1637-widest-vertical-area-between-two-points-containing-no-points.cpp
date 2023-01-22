class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        vector<int> xcoors;
        
        for(int i = 0; i < points.size(); i++){
            xcoors.push_back(points[i][0]);
        }
        
        sort(xcoors.begin(), xcoors.end());
        
        int a = 0, b;
        for(int i = 1; i < xcoors.size(); i++){
            b = xcoors[i] - xcoors[i - 1];
            if(a < b){
                a = b;
            }
        }
        
        return a;
    }
};