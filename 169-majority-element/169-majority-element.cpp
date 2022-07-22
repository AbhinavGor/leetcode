class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int, int>res;
        int lim = nums.size()/2;
        for(int i = 0; i < nums.size(); i++){
            res[nums[i]]++;
            if(res[nums[i]] > lim){
                return nums[i];
            }
        }
        
        return 0;
    }
};