class Solution {
public:
    bool isPalindrome(int x) {
        vector<int> num;
        int m = 10;
        
        if(x < 0){
            return false;
        }
        
        while(x > 0){
            int t = x%m;
            x = x/10;
            num.push_back(t);
        }
        
        bool res = true;
        for(int i = 0; i < num.size()/2; i++){
            if(num[i] == num[num.size() - i - 1]){
                continue;
            }else{
                return false;
            }
        }
        
        return res;
    }
};