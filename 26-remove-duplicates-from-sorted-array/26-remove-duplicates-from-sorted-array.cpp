class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int count = 0;
        if(nums.size() == 0){
            return 0;
        }
        
        int ind = 0;
        
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] != nums[ind]){
                ind++;
                nums[ind] = nums[i];
            }
        }
        
        return ind + 1;
    }
};