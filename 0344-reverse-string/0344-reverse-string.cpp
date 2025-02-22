class Solution {
public:
    void reverseString(vector<char>& s) {
        int t, n = s.size() - 1;
        for(int i = 0; i < s.size()/2; i++) {
            t = s[i];
            t = t + s[n - i];
            s[i] = t - s[i];
            s[n - i] = t - s[i];
        }
    }
};