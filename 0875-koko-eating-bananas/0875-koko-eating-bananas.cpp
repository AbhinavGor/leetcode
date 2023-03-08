class Solution {
public:
    long long totalHoursToEat(vector<int>& piles, int h){
        long long t = 0;
        for(auto i: piles)
            t += ceil(i/(double)h);
        
        return t;
    }
    
    int minEatingSpeed(vector<int>& piles, int h) {
        int l = 1, H = *(max_element(piles.begin(), piles.end()));
        int ans = -1;
        
        while(l <= H){
            int mid = (H + l)/2;
            
            long long res = totalHoursToEat(piles, mid);
            
            if(res <= h){
                ans = mid;
                H = mid - 1;
            }else{
                l = mid + 1;
            }
        }
        
        return ans;
    }
};