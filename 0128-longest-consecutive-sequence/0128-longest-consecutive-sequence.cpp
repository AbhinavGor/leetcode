class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() == 0)
            return 0;
        int temp = 1, res = INT_MIN;
        sort(begin(nums), end(nums));
        
        for(int i = 1; i < nums.size(); i++){
            if(nums[i] - nums[i - 1] == 1){
                temp++;
            }else if(nums[i] - nums[i - 1] == 0){
                continue;
            }else{
                res = max(res, temp);
                temp = 1;
            }
        }
        
        return max(res, temp);
    }
};