class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int> v = nums;
        
        if(k > nums.size()){
            k = k%nums.size();
        }
        
        if(nums.size() > 1){
            cout<<v.size();
            for(int i = 0; i <= k - 1; i++){
                nums[i] = v[v.size() - k + i];
            }

            for(int i = k; i < v.size(); i++){
                nums[i] = v[i - k];
            }
        }
    }
};