class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        
        vector <int> common;
        vector<int> isDone(nums2.size());
        
        for(int i = 0; i < nums2.size(); i++){
            isDone[i] = 0;
        }
        
        for(int i = 0; i < nums1.size(); i++){
            for(int j = 0; j < nums2.size(); j++){
                if(nums1[i] == nums2[j] and isDone[j] != 1){
                    common.push_back(nums1[i]);
                    isDone[j] = 1;
                    break;
                }
            }
        }
        
        return common;
    }
};