class Solution {
public:
    int strStr(string haystack, string needle) {
        int pos, a = 0, b = 0;
        string s = "";
        
        for(int i = 0; i < haystack.size(); i++){
            s += haystack[i];
            b = i;
            if(s == needle){
                return a;
            }else if(s.size() > needle.size()){
                s = "";
                i = a;
                a+=1;
            }
        }
        
        return -1;
    }
};