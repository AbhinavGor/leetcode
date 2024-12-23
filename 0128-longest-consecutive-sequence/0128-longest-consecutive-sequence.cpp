class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(!nums.size()) return 0;
        sort(nums.begin(), nums.end());
        int last = nums[0];
        int res = 1, res_max = 0;

        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] == last) {
                continue;
            } else if (nums[i] == last + 1) {
                res++;
            } else {
                res_max = max(res, res_max);
                res = 1;
            }
            last = nums[i];
        }

        return max(res, res_max);
    }
};