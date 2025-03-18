class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int l = 0, r = 0, res=0;

        while(l<=r && r < prices.size()) {
            if(prices[r] > prices[l]) {
                res = max(res, prices[r]-prices[l]);
            } else {
                l = r;
            }
            r+=1;
        }

        return max(res, 0);
    }
};