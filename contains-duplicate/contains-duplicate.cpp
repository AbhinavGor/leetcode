class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int j = 0;
        bool isDup = false;
        
        for(int i = 1; i < nums.size(); i++){
            if(nums[i] == nums[j]){
                isDup = true;
                return isDup;
            }else{
                j += 1;
            }
        }
        
        return isDup;
    }
};