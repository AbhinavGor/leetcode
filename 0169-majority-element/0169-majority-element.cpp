class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int freq = 1, curr = nums[0];
        for(int i = 1; i < nums.size(); i++) {
            if(nums[i] == curr) {
                freq++;
            } else {
                if(freq > nums.size()/2) {
                    return curr;
                }
                freq = 1;
                curr = nums[i];
            }
        }

        if(freq > nums.size()/2) {
            return curr;
        }

        return 0;
    }
};