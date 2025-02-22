class Solution {
public:
    bool validPalindrome(string s) {
        int n = s.size() - 1;
        int l = 0, r = n;
        return comp(s, l, r, 0);
    }

    bool comp(string s, int l, int r, int c) {
        int n = s.size() - 1;
        if(c>1) return false;
        while(l < r) {
            if(s[l] != s[r]) {
                return comp(s, l+1,r, c+1) || comp(s, l, r-1, c+1);
            }
            l++;
            r--;
        }

        return true;
    }
};