class Solution {
public:
    int findMin(vector<int>& nums) {
        int l = 0, r = nums.size() - 1, m, res = INT_MAX;

        while (l <= r) {
            if(nums[l] < nums[r]) {
                res = min(res, nums[l]);
                break;
            }

            m = l + (r - l)/2;
            if(nums[m] >= nums[l]) {
                l = m + 1;
            } else {
                r = m - 1;
            }

            res = min(res, nums[m]);
        }

        return res;
    }
};