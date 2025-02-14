class Solution {
public:
    string reversePrefix(string word, char ch) {
        stack<char> s;
        int i;
        for(i = 0; i < word.size(); i++) {
            if(word[i] != ch) {
                s.push(word[i]);
            } else {
                s.push(word[i]);
                break;
            }
        }
        if(i != word.size()) {
            // reverse the seg
            string res = "";
            while(!s.empty()) {
                res += s.top();
                s.pop();
            }
            for(int j = i + 1; j < word.size(); j++) {
                res += word[j];
            }

            return res;
        }
        return word;
    }
};