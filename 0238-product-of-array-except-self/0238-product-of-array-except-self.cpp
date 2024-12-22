class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int pre = 1, post = 1;

        vector<int> res;

        for(int i: nums) {
            res.push_back(pre);
            pre *= i;
        }

        for(int i = nums.size() - 1; i >= 0; i--) {
            res[i] *= post;
            post = post*nums[i];
        }

        return res;
    }
};