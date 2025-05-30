class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> s;
        
        for(int i = 0; i < nums.size(); i++) {
            nums[s.size()] = nums[i];
            s.insert(nums[i]);
        }

        return s.size();
    }
};