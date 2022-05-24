class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> res;
        
        for(int i = 0; i < tokens.size(); i++){
            string s = tokens[i];
            if(isdigit(s[0]) || s.size() > 1){
                res.push(stoi(s));
                continue;
            }
            
            int a = res.top();
            res.pop();
            int b = res.top();
            res.pop();
            
            if(s == "+"){
                res.push(a+b);
            }else if(s == "-"){
                res.push(b - a);
            }else if(s == "*"){
                res.push(b*a);
            }else if(s == "/"){
                res.push(b/a);
            }
        }
        
        return res.top();
    }
};