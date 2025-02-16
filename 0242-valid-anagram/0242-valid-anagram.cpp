class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> m1, m2;
        for(char c: s) {
            m1[c] += 1;
        }

        for(char c: t) {
            m2[c] += 1;
        }

        for(auto i: m1) {
            if(m2[i.first] != i.second) {
                return false;
            } else {
                m1[i.first] = -1;
                m2[i.first] = -1;
            }
        }

        for(auto i: m1) {
            if(i.second != -1) return false;
        }

        for(auto i: m2) {
            if(i.second != -1) return false;
        }

        return true;
    }
};