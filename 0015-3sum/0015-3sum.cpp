class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<int>> res;
        sort(begin(nums), end(nums));
        
        for(int i = 0; i < nums.size(); i++) {
            int temp = nums[i];
            int l = 0, r = nums.size() - 1;
            
            while(l < r) {
                int sum = nums[l] + nums[r] + temp;
                // cout<<<<temp<<" "<<nums[l]sum<<endl;
                if(sum == 0 && l != i && r != i) {
                    vector<int> temp_v = {nums[l], nums[r], temp};
                    sort(begin(temp_v), end(temp_v));
                    res.insert(temp_v);
                    l++;
                    r--;
                } else if(sum < 0) {
                    l++;
                } else if (sum > 0) {
                    r--;
                } else if(l == i || r == i) {
                    break;
                }
            }
        }
        
        vector<vector<int>> res_v;
        
        for(vector<int> v: res) {
            res_v.push_back(v);
        }
        
        return res_v;
    }
};