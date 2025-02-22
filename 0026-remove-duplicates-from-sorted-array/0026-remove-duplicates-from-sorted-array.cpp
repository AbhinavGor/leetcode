class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int res = 1, prev = nums[0];
        for(int i = 1; i < nums.size(); i++) {
            if(prev!=nums[i]) {
                nums[res] = nums[i];
                res+=1;
                prev=nums[i];
            }
        }

        return res;
    }
};