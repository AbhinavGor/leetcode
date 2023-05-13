class Solution {
public:
    int matrixSum(vector<vector<int>>& nums) {
        int res = 0;
        int n1 = nums.size(), n2 = nums[0].size();
        
        for(int i = 0; i < n1; i++)
            sort(nums[i].begin(), nums[i].end(), greater<int>());
        
        for(int i = 0; i < n2; i++){
            int r = INT_MIN;
            for(int j = 0; j < n1; j++){
                if(r < nums[j][i])
                    r = nums[j][i];
            }
            res += r;
        }
        return res;
    }
};