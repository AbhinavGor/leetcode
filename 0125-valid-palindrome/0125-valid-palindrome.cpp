class Solution {
public:
    bool isPalindrome(string s) {
        string S = "";
        
        for(int i = 0; i < s.size(); i++){
            if(65 <= s[i] && s[i] <= 90){
               S+=(s[i] + 32); 
            }else if (97 <= s[i] && s[i] <= 122){
                S+=s[i]; 
            }else if (48 <= s[i] && s[i] <= 57){
                S+=s[i]; 
            }
        }
        
        cout<<S<<endl;
        for(int i = 0; i < S.size(); i++){
            if(S[i] != S[S.size() - i - 1]){
                return false;
            }
        }
            
        return true;
    }
};