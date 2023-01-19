class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_map<char, int> res;
        
        for(int i = 0; i < jewels.size(); i++){
            res[jewels[i]] = 0;
        }
        
        for(int i = 0; i < stones.size(); i++){
            res[stones[i]]++;
        }
        
        int resInt = 0;
        
        for(int i = 0; i < jewels.size(); i++){
            resInt += res[jewels[i]];
        }
        
        return resInt;
    }
};