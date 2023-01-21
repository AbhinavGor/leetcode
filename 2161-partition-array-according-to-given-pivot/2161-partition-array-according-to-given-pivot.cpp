class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> res(nums.size());
        int low = 0, eq = 0, high = nums.size();
        
        for(auto n : nums){
            if(n < pivot){
                eq++;
            }else if(n > pivot){
                high--;
            }
        }
        
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] < pivot){
                res[low++] = nums[i];
            }else if(nums[i] == pivot){
                res[eq++] = nums[i];
            }else{
                res[high++] = nums[i];
            }
        }
        
        return res;
    }
};