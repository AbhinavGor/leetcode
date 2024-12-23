class Solution {
public:
    bool isPalindrome(string s) {
        int l = 0, r = s.size() - 1;
        while(l < s.size() && r > -1) {
            if(tolower(s[l]) == tolower(s[r])) {
                l++;
                r--;
                continue;
            } else if (!isalnum(s[l])) {
                l++;
            } else if (!isalnum(s[r])) {
                r--;
            } else {
                return false;
            }
        }

        return true;
    }
};