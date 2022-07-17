class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.length() != t.length()){
            return false;
        }
        
        map<char, char> m;
        set<char> ss;
        
        for(int i = 0; i < s.length(); i++){
            char c1 = s[i], c2 = t[i];
            
            if(m.find(c1) != m.end()){
                if(m[c1] != c2){
                    return false;
                }
            }else{
                if(ss.find(c2) != ss.end())
                    return false;
                
                ss.insert(c2);
                m[c1] = c2;
            }
        }
        
        return true;
    }
};