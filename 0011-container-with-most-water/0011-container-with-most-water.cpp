class Solution {
public:
    int maxArea(vector<int>& height) {
        vector<int> res;
        int l = 0, r = height.size() - 1;
        int V = min(height[l], height[r]) * (-l + r);
        
        while(l != r){
            if(height[l] < height[r]){
                l++;
                if(height[l] > height[l - 1] && l != r){
                    V = max(V, min(height[l], height[r]) * (-l + r));
                }
            }else{
                r--;
                if(height[r] > height[r+1] && l!= r){
                    V = max(V, min(height[l], height[r]) * (-l + r));
                }
            }
        }
        return V;
        
    }
};