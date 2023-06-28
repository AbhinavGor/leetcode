class Solution {
public:
    bool isPalindrome(string s) {
        
        for (int i = 0; i < s.size(); i++){
            if(isalpha(s[i]) || isdigit(s[i])){
                if(!islower(s[i])){
                    s[i] = s[i] + 32;
                }
            }else{
                s.erase(i, 1);
                i--;
            }
        }
        cout<<s<<endl;
        
        int l = 0, r = s.size() - 1;
        
        while(l < r){
            if(s[l] == s[r]){
                l++;
                r--;
                continue;
            }else{
                cout<<s[l]<<s[r]<<endl;
                return false;
            }
        }
        
        return true;
    }
};