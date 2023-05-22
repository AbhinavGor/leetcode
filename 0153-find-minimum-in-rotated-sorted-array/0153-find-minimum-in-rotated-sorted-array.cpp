class Solution {
public:
    int findMin(vector<int>& nums) {
        int res = nums[0], l = 0, r = nums.size() - 1;
        
        while(l <= r){
            if(nums[l] < nums[r]){
                res = min(nums[l], res);
                break;
            }
            
            int mid = l+(-l + r)/2;
            res = min(res, nums[mid]);
            if(nums[mid] >= nums[l]){
                l = mid + 1;
            }else{
                r = mid - 1;
            }
        }
        
        return res;
    }
};