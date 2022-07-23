class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if((nums.size() == 0) || (nums.size() == 1))
            return nums.size();
        
        int maxLen = INT_MIN;
        int c = 1;
        
        sort(nums.begin(), nums.end());
        
        for(int i = 1; i < nums.size(); i++){
            if(nums[i] - nums[i - 1] == 1){
                c++;
            }else if(nums[i] - nums[i - 1] == 0){
                continue;
            }else{
                c = 1;
            }
            
            if(c > maxLen){
                maxLen = c;
            }
        }
        
        if(c > maxLen){
                maxLen = c;
        }
        
        return maxLen;
    }
};