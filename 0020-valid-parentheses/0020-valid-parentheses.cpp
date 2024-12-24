class Solution {
public:
    bool isValid(string s) {
        stack<char> p;

        for(char c: s) {
            if(c == '(' || c == '[' || c == '{') {
                p.push(c);
            } else if(c == ')') {
                if (p.empty()) {return false;};
                char temp = p.top();
                if(temp != '(') {
                    return false;
                }
                p.pop();
                continue;
            } else if (c == ']') {
                if (p.empty()) {return false;};
                char temp = p.top();
                if(temp != '[') {
                    return false;
                }
                p.pop();
                continue;
            } else if (c == '}') {
                if (p.empty()) {return false;};
                char temp = p.top();
                if(temp != '{') {
                    return false;
                }
                p.pop();
                continue;
            }
        }

        return p.empty();
    }
};