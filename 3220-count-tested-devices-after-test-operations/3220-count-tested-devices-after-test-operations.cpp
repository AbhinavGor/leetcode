class Solution {
public:
    int countTestedDevices(vector<int>& bp) {
        int tested = 0;
        for(int i = 0; i < bp.size(); i++){
            bp[i] = max(0, bp[i] - tested);
            if(bp[i] > 0) {
                tested+=1;
            }
        }

        return tested;
    }
};