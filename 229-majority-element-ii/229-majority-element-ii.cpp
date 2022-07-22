class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        set<int>res;
        int current = nums[0], count = 0, lim = nums.size() / 3;
        
        sort(nums.begin(), nums.end());
        
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == current){
                count++;
            }else{
                current = nums[i];
                count = 1;
            }
            
            if(count > lim){
                res.insert(nums[i]);
            }
        }
        
        vector<int>finalRes;

        set<int, greater<int> >::iterator itr;
        for (itr = res.begin(); itr != res.end(); itr++) {
            finalRes.push_back(*itr);
        }
        
        return finalRes;
    }
};