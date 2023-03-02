class Solution {
public:
    int compress(vector<char>& chars) {
        string s = "";
        char temp = chars[0];
        int rep = 0, tot_len = 0;
        
        for(int i = 0; i < chars.size(); i++){
            if(temp == chars[i]){
                rep++;
            }else if(rep == 1){
                s += temp;
                temp = chars[i];
                tot_len += rep;
                rep = 1;
            }else{
                s += temp;
                s += to_string(rep);
                temp = chars[i];
                tot_len += rep;
                rep = 1;
            }
        }
        
        if(rep == 1){
            s += temp;
        }else{
            s += temp;
            s+= to_string(rep);
            tot_len += rep;
        }
        
        cout<<s<<endl;
        
        for(int i = 0; i < s.size(); i++){
            chars[i] = s[i];
        }
        return s.size();
    }
};