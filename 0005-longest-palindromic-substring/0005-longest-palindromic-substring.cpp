class Solution {
public:
    string longestPalindrome(string S) {
        int s = 0, e = 0;
        for(int i = 0; i < S.size(); i++){
            int l1 = expand(S, i, i); //for odd len strings
            int l2 = expand(S, i, i + 1); //for even len strings
            int l = max(l1,  l2);
            if(l > e - s){
                e = i + l/2;
                s = i - ((l - 1)/2);
            }
        }
        
        cout<<s<<" "<<e<<endl;
        string res = "";
        for(int i = s; i < e+1; i++){
            res += S[i];
        }
        
        return res;
    }
    
    int expand(string s, int l, int r){
        while(l >= 0 && r < s.size() && s[l] == s[r]){
            l--;
            r++;
        }
        return r - l - 1;
    }
};