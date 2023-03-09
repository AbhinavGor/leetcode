class Solution {
public:
    string licenseKeyFormatting(string s, int k) {
        string res = "";
        vector<char> chars;
        
        for(int i = 0; i < s.size(); i++){
            if(s[i] != '-' && s[i] != ' '){
                if(islower(s[i])){
                    chars.push_back(s[i] - 32);
                }else{
                    chars.push_back(s[i]);
                }
            }
        }
        
        int count = 0;
        
        for(int i = chars.size() - 1; i >= 0; i--){
            if(count == k && i < chars.size() - 1){
                res += '-';
                count = 1;
                res += chars[i];
            }else{
                res += chars[i];
                count++;
            }
        }
        
        reverse(res.begin(), res.end());
        
        return res;
    }
};