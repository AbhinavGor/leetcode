class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int res = 0, t = 0;

        for(int i = 0; i < nums.size() - 1; i++) {
            if(nums[i] < nums[i + 1]) {
                t += nums[i];
            } else {
                res = max(res, t + nums[i]);
                t = 0;
            }
        }

        res = max(t + nums[nums.size() - 1], res);

        return res;
    }
};