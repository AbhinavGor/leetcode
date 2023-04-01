class Solution {
public:
    
    int lengthOfLongestSubstring(string s) {
        int l = 0, i = 0;
        
        while(i < s.size()){
            bool v[256] = {false};
            int j = i;
            
            while(j < s.size() && v[s[j]] == false){
                l = max(j - i + 1, l);
                v[s[j]] = true;
                j++;
            }
            v[s[i]]  =false;
            i++;
        }
        
        return l;
    }
};