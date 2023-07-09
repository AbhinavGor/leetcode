class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() == 0)
            return 0;
        sort(begin(nums), end(nums));
        
        int last = nums[0], curr = 1, temp = 1;
        
        for(int i = 1; i < nums.size(); i++){
            if(last == nums[i]){
                continue;
            }else if(abs(last - nums[i]) == 1){
                last = nums[i];
                temp++;
            }else{
                curr = max(temp, curr);
                temp = 1;
                last = nums[i];
            }
        }
        
        return max(curr, temp);
    }
};