class Solution {
public:
    int arraySign(vector<int>& nums) {
        int n = 0, z = 0;
        
        for(auto i:nums){
            if(i < 0)
                n++;
            if(i == 0)
                z++;
            if(z > 0)
                return 0;
        }
        
        if(n%2 == 0)
            return 1;
        
        return -1;
    }
};