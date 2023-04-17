class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() == 0)
            return 0;
        sort(nums.begin(), end(nums));
        int temp = 1, last = nums[0], longest = 0;
        vector<int> res;
        
        for(int i = 1; i < nums.size(); i++){
            if(nums[i] - last == 1){
                temp++;
                last = nums[i];
            }else if(nums[i] - last == 0){
                continue;
            }else{
                longest = max(longest, temp);
                temp = 1;
                last = nums[i];
            }
        }
        
        return max(longest, temp);
        
    }
};