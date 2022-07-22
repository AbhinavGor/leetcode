class Solution {
public:
    int findDuplicate(vector<int>& arr) {
        vector<int>res(arr.size() - 1, 0);
        
        for(int i = 0; i < arr.size(); i++){
            res[arr[i] - 1]++;
        }
        
        for(int i = 0; i < res.size(); i++){
            if(res[i] > 1){
                return (i + 1);
            }
        }
        
        return 0;
    }
};