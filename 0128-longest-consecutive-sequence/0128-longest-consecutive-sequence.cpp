class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(!nums.size()) return 0;
        sort(begin(nums), end(nums));
        int last = nums[0], l = 1, maxL = 0;
        
        for(int i = 1; i < nums.size(); i++) {
            if(abs(last - nums[i]) == 1){
                last = nums[i];
                l++;
            } else if(abs(last - nums[i]) == 0) {
                continue;
            } else {
                if(l > maxL) maxL = l;
                
                last = nums[i];
                l = 1;
            }
        }
        
        return max(l, maxL);
    }
};