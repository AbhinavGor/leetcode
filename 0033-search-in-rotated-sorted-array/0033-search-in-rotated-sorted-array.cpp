class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size() - 1;
        int l = 0, r = n;

        if(n == 0) {
            return (nums[0] == target)-1;
        }

        while(l <= r) {
            
            int m = l + (r - l)/2;
            cout<<l<<" "<<m<<" "<<r<<endl;

            if(nums[m] == target) {
                return m;
            } else  if(nums[l] == target) {
                return l;
            } else  if(nums[r] == target) {
                return r;
            } 
            
            // check if array is rotated
            if(nums[l] <= nums[m]) {
                if(nums[m] < target || target < nums[l]) {
                    // search right
                    l = m + 1;
                } else {
                    // search left
                    r = m - 1;
                }
            } else {
                if(nums[m] > target || nums[l] < target) {
                    r = m - 1;
                } else {
                    l = m + 1;
                }
            }
        }

        return -1;
    }
};