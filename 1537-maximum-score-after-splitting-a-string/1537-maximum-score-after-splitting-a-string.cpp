class Solution {
public:
    int maxScore(string s) {
        int ones = 0, zeros = 0;

        for(char c: s) {
            if( c == '1') {
                ones++;
            }
        }
        int res = 0;
        int t_o;
        for(int i = 1; i < s.size(); i++) {
            t_o = ones;
            zeros = 0;
            for(int j = 0; j < i; j++) {
                if (s[j] == '0') {
                    zeros++;
                } else {
                    t_o--;
                }
            }
            res = max(res, t_o+zeros);
        }

        return max(res, t_o+zeros);

    }
};