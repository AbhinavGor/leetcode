class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int l = 0, r = 0, res = 0;
        
        while(r < prices.size()){
            if(prices[r] > prices[l]){
                res = max(res, prices[r] - prices[l]);
            }else{
                l = r;
            }
            r++;
        }
        
        return max(0, res);
    }
};