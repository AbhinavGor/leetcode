class Solution {
public:
    int countOdds(int low, int high) {
        int res = 0;
        
        for(int i = low; i <= high; i++){
            if(i%2){
                res++;
            }
        }
        
        return res;
    }
};