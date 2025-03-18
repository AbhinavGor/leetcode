class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int num_val = 0;
        for(int i = 0; i < nums.size(); i++) {
            nums[i-num_val] = nums[i];
            if(nums[i] == val) num_val++;
        }

        return nums.size() - num_val;
    }
};