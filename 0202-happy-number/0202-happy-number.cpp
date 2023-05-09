class Solution {
public:
    bool isHappy(int n) {
        int res = 10;
        unordered_map<int, int> m;
        while(m.find(n) == m.end()){
            res = 0;
            m[n] = 1;
            while(n > 0){
                int temp = n % 10;
                res  += temp*temp;
                n = n/10;
            }
            n = res;
            cout<<res<<endl;
        }
        
        
        return res == 1;
    }
};