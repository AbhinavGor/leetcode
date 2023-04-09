class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> m;
        
        for(int i = 0; i < s.size(); i++)
            m[s[i]] = 0;
        
        for(int i = 0; i < s.size(); i++)
            m[s[i]]++;
        
        for(int i = 0; i < t.size(); i++){
            if(m[t[i]] <= 0)
                return false;
            
            m[t[i]]--;
        }
        
        int sum=0;
        for(auto i: m){
            sum+=i.second;
        }
        
        if(sum == 0)
            return true;
        return false;
            
    }
};