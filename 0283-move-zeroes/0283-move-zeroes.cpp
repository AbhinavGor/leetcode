class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int nz = 0;
        for(int i = 0; i < nums.size(); i++) {
            nums[nz]=nums[i];
            if(nums[i]!=0) nz++;
        }
        for(int i = nz; i < nums.size(); i++) nums[i] = 0;
    }
};