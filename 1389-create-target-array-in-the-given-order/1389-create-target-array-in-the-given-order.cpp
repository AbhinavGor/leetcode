class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        vector<int> res, target;

        for(int i = 0; i < nums.size(); i++){
            res.push_back(0);
            target.push_back(0);
        }

        for(int i = 0; i < nums.size(); i++){
                
            if(res[index[i]] == 0){
                target[index[i]] = nums[i];
                res[index[i]] = 1;
            }else{
                int a = 0, b = nums[i];
                for(int j = index[i]; j < res.size(); j++){
                    a = target[j];
                    target[j] = b;
                    b = a;
                    res[j] = 1;
                }
            }
        }
        
        return target;
        
    }
};