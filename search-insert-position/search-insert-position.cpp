class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int res = INT_MAX;
        bool isPres, isGre = false;
        
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == target){
                isPres = true;
                return i;
            }
            if(nums[i] > target){
                if( i < res){
                    isGre = true;
                    res = i;
                }
            }
        }
        
        if(isGre)
            return res;
        else
            return nums.size();
    }
};