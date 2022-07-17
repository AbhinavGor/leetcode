class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int m = 0, buy = prices[0];
        for(int i = 0; i < prices.size(); i++){
            if(buy > prices[i])
                buy = prices[i];
            else if(m < (prices[i] - buy))
                m = -buy + prices[i];
        }
        
        return m;
        
    }
};