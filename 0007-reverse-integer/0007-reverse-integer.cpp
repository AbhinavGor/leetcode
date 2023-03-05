class Solution {
public:
    int reverse(int x) {
        bool isNeg = false;
        long long y = x;
        
        if(x < 0){
            isNeg = true;
            y = y * -1;
        }
        vector<string> digs;
        
        while(y > 0){
            digs.push_back(to_string(y%10));
            y = y / 10;
        }
        
        long long t = pow(10, digs.size());
        long long res = 0;
        int n = digs.size() - 1;
        
        for(int i = 0; i < digs.size(); i++){
            // cout<<stoi(digs[i])*pow(10, n)<<" ";
            res += stoi(digs[i])*pow(10, n);
            n--;
        }
        
        if(isNeg){
            res = -res;
        }
        if(res > 2147483648 - 1 || res < -2147483648){
                return 0;
        }
        return res;
    }
};