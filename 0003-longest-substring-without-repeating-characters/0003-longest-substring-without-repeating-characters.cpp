class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int res = 0, temp = 0, last = 0;
        set<char> t = {};

        for(int i = 0; i < s.size(); i++) {
            for(int j = i; j < s.size(); j++) {
                if(t.find(s[j]) == t.end()) {
                    t.insert(s[j]);
                } else {
                    temp = t.size();
                    res = max(res, temp);
                    t.clear();
                    break;
                }
            }
            temp = t.size();

            res = max(res, temp);
            t.clear();
        }
        temp = t.size();

        return max(res, temp);
    }
};