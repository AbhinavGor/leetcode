class Solution {
public:
    string reverseWords(string s) {
        stack<char> strs;
        
        // vector <char> res_chars;
        
        string res = "";
 
        for (int i = 0; i < s.length(); i++) {
            if (s[i] != ' ')
                strs.push(s[i]);

            else {
                while (strs.empty() == false) {
                    res += strs.top();
                    strs.pop();
                }
                res += " ";
            }
        }
        while (strs.empty() == false) {
            res += strs.top();
            strs.pop();
        }
        
        return res;
    }
};