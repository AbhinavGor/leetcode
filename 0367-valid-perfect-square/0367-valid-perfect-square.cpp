class Solution {
public:
    bool isPerfectSquare(int num) {
        long int l = 1, r = num, mid;
        while(true){
            mid = (l + r)/2;
            if(mid > num/mid){
                r = mid - 1;
            }else{
                if(mid*mid == num)
                    return true;
                if((mid + 1) > num/(mid + 1))
                    return false;
                l = mid + 1;
            }
        }
        
        return true;
    }
};