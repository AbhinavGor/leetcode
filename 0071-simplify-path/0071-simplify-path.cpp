class Solution {
public:
    string simplifyPath(string path) {
        string curr;
        stack<string> s;
        path += "/";

        for(char c: path) {
            if(c == '/') {
                if(curr == "..") {
                    if(!s.empty()){
                        s.pop();
                    }
                } else if(curr != "." && curr != "") {
                    s.push(curr);
                }

                curr = "";
            } else {
                curr += c;
            }
        }

        string res = "";
        vector<string> seg;

        while(!s.empty()) {
            cout<<s.top()<<" ";
            seg.push_back(s.top());
            s.pop();
        }
        reverse(seg.begin(), seg.end());
        for(string r: seg) {
            cout<<r<<endl;
            res = res + ("/" + r);
        }

        if(res == "") {
            res = "/";
        }
        return res;
    }
};