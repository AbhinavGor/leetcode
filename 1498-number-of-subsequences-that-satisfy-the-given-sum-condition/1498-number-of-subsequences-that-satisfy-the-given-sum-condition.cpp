class Solution {
public:
    int numSubseq(vector<int>& nums, int target) {
        sort(begin(nums), end(nums));
        int res = 0, n = nums.size();
        
        vector<int> pows(n, 1);
        int k = 1000000007;
        
        for(int i = 1; i < n; i++)
            pows[i] = pows[i - 1]*2%k;
        
        for(int l = 0, r = n - 1; l <= r; ){
            if(nums[l] + nums[r] <= target){
                res += pows[r - l];
                res %= k;
                l++;
            }else{
                r--;
            }
        }
        
        return res;
    }
};