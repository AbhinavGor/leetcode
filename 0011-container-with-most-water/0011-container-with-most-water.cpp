class Solution {
public:
    int maxArea(vector<int>& height) {
        int l = 0, r = height.size() - 1;
        int res = (r - l)*min(height[l], height[r]);
        
        while(l != r){
            if(height[l] < height[r]){
                l++;
                if(height[l] > height[l - 1]){
                    res = max(res, (r - l)*min(height[l], height[r]));
                }
            }else{
                r--;
                if(height[r] > height[r + 1]){
                    res = max(res, (r - l)*min(height[l], height[r]));
                }
            }
        }
        
        return res;
    }
};