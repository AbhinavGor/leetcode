class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int n = nums.size(), res = 0,t = 1;

        for(int i = 0; i < n - 1; i++) {
            if(nums[i] > nums[i+1]) {
                t++;
            } else {
                res = max(res, t);
                t = 1;
            }
        }
        res = max(res, t);
        
        for(int i = n - 1; i > 0; i--) {
            if(nums[i] > nums[i-1]) {
                t++;
            } else {
                res = max(res, t);
                t = 1;
            }
        }
        res = max(res, t);

        return res;
    }
};