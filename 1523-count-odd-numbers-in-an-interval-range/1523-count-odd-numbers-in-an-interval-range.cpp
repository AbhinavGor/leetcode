class Solution {
public:
    int countOdds(int low, int high) {
        int res = 0;
        
        if(low%2){
            res++;
            if(high%2){
                res++;
                res += (high - low - 2)/2;
            }else{
                res += (high - low - 1)/2;
            }
        }else if(high % 2){
            return (((high - low)/2) + 1);
        }else{
            return (high - low)/2;
        }
        
        return res;
    }
};