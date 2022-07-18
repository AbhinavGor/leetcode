class Solution {
public:
    int binarySearch(vector<int>& nums, int r, int l, int x){
        if(r >= l){
            int mid = l + (r - l)/2;
            
            if(nums[mid] == x)
                return mid;
            if(nums[mid] > x)
                return binarySearch(nums, mid - 1, l, x);
            if(nums[mid] < x)
                return binarySearch(nums, r, mid + 1, x);
        }
        
        return -1;
    }
    int search(vector<int>& nums, int target) {
        return binarySearch(nums, nums.size() - 1, 0, target);
    }
};