class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // map<int, int>res;
        int lim = nums.size()/2;
        // for(int i = 0; i < nums.size(); i++){
        //     res[nums[i]]++;
        //     if(res[nums[i]] > lim){
        //         return nums[i];
        //     }
        // }
        
        sort(nums.begin(), nums.end());
        
        int count = 0, current = nums[0];
        
        for(int i = 0; i < nums.size(); i++){
            if(current == nums[i]){
                count++;
            }else{
                count = 1;
                current = nums[i];
            }
            
            if(count > lim){
                return nums[i];
            }
        }
        
        return 0;
    }
};