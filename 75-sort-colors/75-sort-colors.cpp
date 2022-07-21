class Solution {
public:
    void sortColors(vector<int>& nums) {
        vector<int> counts(3, 0);
        for(int i = 0; i < nums.size(); i++){
            counts[nums[i]]++;
        }
        
        for(int i = 0; i < counts[0]; i++){
            nums[i] = 0;
        }
        
        for(int i = counts[0]; i < counts[0] + counts[1]; i++){
            nums[i] = 1;
        }
        
        for(int i = counts[0] + counts[1]; i < nums.size(); i++){
            nums[i] = 2;
        }
    }
};