class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int sum = 0, dsum = 0;        
        
        for(int i = 0; i < nums.size(); i++){
            sum += nums[i];
            int m, n = nums[i];
            while(n>0)    {    
                m=n%10;
                dsum=dsum+m;
                n=n/10;
            }    
        }
        int diff = sum - dsum;
        
        if(diff){
            return diff;
        }
        return -diff;
    }
};