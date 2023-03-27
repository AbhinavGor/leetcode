class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        cout<<nums[0];
        int s = nums.size() - 1;
        if(nums[1] < 0 && nums[s] >= 0){
            return nums[s]*max(nums[s - 1]*nums[s-2], nums[0]*nums[1]);
        }
        
        return nums[s]*nums[s - 1]*nums[s-2];
        
    }
};