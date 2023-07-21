class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l = 0, i = 0;
        
        while(i < s.size()){
            bool v[256] = {false};
            
            int j = i;
            while(j < s.size() && !v[s[j]]){
                v[s[j]] = true;
                l = max(l, j - i + 1);
                j++;
            }
            i++;
        }
        
        return l;
    }
};