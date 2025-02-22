class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l = 0, r = nums.size() - 1, m;
        m = l + (r-l)/2;
        if(nums[m] == target) return m;
        if(nums[l] == target) return l;
        if(nums[r] == target) return r;

        while(l < r) {
            cout<<m<<" ";
            if(nums[m] == target) return m;
            if(nums[l] == target) return l;
            if(nums[r] == target) return r;

            if(nums[m] > target) {
                // search left
                r = m-1;
            } else {
                // search right
                l = m+1;
            }
            m = l + (r-l)/2;
        }

        return -1;
    }
};