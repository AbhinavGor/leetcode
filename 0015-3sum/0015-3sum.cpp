class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;
        int n = nums.size();
        
        if(nums.size() < 3)
            return res;
        
        sort(begin(nums), end(nums));
        
        for(int i = 0; i < nums.size(); i++){
            int t = nums[i], l = i + 1, r = nums.size() - 1;
            
            while(l < r){
                int sum = t + nums[l] + nums[r];
                if(sum == 0){
                    res.push_back({t, nums[l], nums[r]});
                    while(l <r && nums[l] == nums[l + 1]) l++;
                    while(l < r && nums[r] == nums[r - 1]) r--;
                    
                    l++;
                    r--;
                }else if(sum > 0){
                    r--;
                }else{
                    l++;
                }
            }
            while(i + 1 < n && nums[i] == nums[i + 1]) i++;
        }
        
        return res;
    }
};