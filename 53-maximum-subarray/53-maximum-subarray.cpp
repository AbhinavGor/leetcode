class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        if(nums.size() == 1){
            return nums[0];
        }
        
        int res = 0;
        
        int maxSum = INT_MIN;
        
        for(int i = 0; i < nums.size(); i++){
            res += nums[i];
            if(res > maxSum){
                maxSum = res;
            }
            
            if(res < 0){
                res = 0;
            }
        }
        
        return maxSum;
    }
};