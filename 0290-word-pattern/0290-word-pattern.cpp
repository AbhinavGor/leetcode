class Solution {
public:
    bool wordPattern(string pattern, string s) {
        vector<string> words;
        set<char> a;
        set<string> b;
        
        unordered_map<char, string> smap;
        
        string word = "";
        for(auto x: pattern){
            smap[x] = " ";
            a.insert(x);
        }
        
        for (auto x : s){
            if (x == ' '){
                
                words.push_back(word);
                b.insert(word);
                word = "";
            }else {
                word = word + x;
            }
        }
        b.insert(word);
        words.push_back(word);
        
        for(int i = 0; i < words.size(); i++){
            if((smap[pattern[i]] != " ") && (words[i] != smap[pattern[i]])){
                return false;
            }else{
                smap[pattern[i]] = words[i];
            }
        }
        
        if(a.size() != b.size()){
            return false;
        }
        return true;
    }
};