class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        string ts1 = s1, ts2 = s2;
        sort(ts1.begin(), ts1.end());
        sort(ts2.begin(), ts2.end());

        if(ts1 != ts2 || ts1.size() != ts2.size()) {
            return false;
        }
        int c = 0;
        char temp;

        for(int i = 0; i < s1.size(); i++) {
            if(s1[i] != s2[i]) {
                // if(c > 0 and s2[i] != temp) return false;
                c+=1;
                // temp = s1[i];
            }
        }

        if(c > 2) {
            return false;
        }

        return true;
    }
};