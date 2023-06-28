class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int l = 0, r = nums.size() - 1;
        vector<int> res;
        
        while(l < r){
            int sum = nums[l] + nums[r];
            if(sum == target){
                res.push_back(l + 1);
                res.push_back(r + 1);
                return res;
            }else if(sum > target){
                r--;
            }else if(sum < target){
                l++;
            }
        }
        
        return res;
    }
};