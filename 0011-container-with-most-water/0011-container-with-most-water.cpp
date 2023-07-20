class Solution {
public:
    int maxArea(vector<int>& h) {
        int res = 0, l = 0, r = h.size() - 1;
        
        while(l < r){
            res = max(res, (r - l)*min(h[l], h[r]));
            if(h[r] > h[l]){
                l++;
            }else{
                r--;
            }
        }
        
        return res;
    }
};