class Solution {
public:
    bool isArraySpecial(vector<int>& nums) {
        if(nums.size() == 1) return true;
        vector<bool> res;

        for(int i = 0; i < nums.size() - 1; i++) {
            if(nums[i]%2 != nums[i + 1]%2) {
                res.push_back(true);
            } else {
                res.push_back(false);
            }
        }

        for(bool a: res) {
            if(!a) {
                return false;
            }
        }
        return true;
    }
};