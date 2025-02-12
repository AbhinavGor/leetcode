class Solution {
public:
    string minRemoveToMakeValid(string s) {
        int lcount = 0, rcount = 0;
        stack<char> ss;

        for(char c: s) {
            if(c == '(') {
                lcount++;
            } else if (c ==')') {
                rcount++;
            }

            if(rcount > lcount) {
                rcount--;
            } else {
                ss.push(c);
            }
        }

        string res;
        while(!ss.empty()) {
            if(lcount > rcount && ss.top() == '(') {
                lcount--;
            } else {
                res+=ss.top();
            }
            ss.pop();
        }

        reverse(res.begin(), res.end());

        return res;
    }
};