class Solution {
public:
    int kthFactor(int n, int k) {
        vector<int> facs;
        
        for(int i = 1; i <= n; i++) {
            if(n%i == 0) facs.push_back(i);
        }
        
        if(facs.size() >= k) return facs[k - 1];
        
        return -1;
    }
};