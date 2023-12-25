class Solution {
public:
    int getMaximumGenerated(int n) {
        vector<int> nums;
        int m = INT_MIN;
        
        for(int i = 0; i <= n; i++) {
            if(i == 0 || i == 1) {
                nums.push_back(i);
                if(i > m) m = i;
            } else if(i%2 == 0) {
                nums.push_back(nums[i/2]);
                if(nums[i / 2] > m) m = nums[i/2];
            } else if(i%2 == 1) {
                nums.push_back(nums[i/2]  +nums[i/2 + 1]);
                if(nums[i/2] + nums[i/2 + 1] > m) m = nums[i/2] + nums[i/2 + 1];
            }
        }
        
        return m;
        
    }
};