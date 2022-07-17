class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char, int> m;
        map<char, int> odd;
        map<char, int> eve;
        
        int res = 0;
        
        for(int i = 0; i < s.length(); i++){
            m[s[i]]++;
        }
        
        for(int i = 0; i < s.length(); i++){
            if(m[s[i]]%2){
                odd[s[i]] = m[s[i]];
            }else{
                eve[s[i]] = m[s[i]];
            }
        }
        
        for(auto i: eve){
            res += i.second;
        }
        
        int maxOdd = 0;
        
        for(auto i: odd){
            if(i.second > maxOdd){
                maxOdd = i.second;
            }
            
            res += (i.second - 1);
        }
        
        if(maxOdd >= 1){
            cout<<maxOdd<<" "<<s<<endl;
            return (res + 1);
        }else{
            return (res);
        }
    }
};