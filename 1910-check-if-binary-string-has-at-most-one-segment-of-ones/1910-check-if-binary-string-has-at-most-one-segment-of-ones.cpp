class Solution {
public:
    bool checkOnesSegment(string s) {
        int z = s.size() - 1;
        for(int i = 0; i < s.size(); i++){
            if(i > z && s[i] == '1') return false;
            if(s[i] == '0') {
                z = i;
            }
        }

        return true;
    }
};