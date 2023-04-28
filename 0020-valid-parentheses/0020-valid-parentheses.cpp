class Solution {
public:
    bool isValid(string s) {
        stack<char> a;
        
        for(int i = 0; i < s.size(); i++){
            if(s[i] == '(' || s[i] == '[' || s[i] == '{'){
                a.push(s[i]);
            }else if(!a.empty()){
                if(s[i] == ')'){
                    if(a.top() != '('){
                        return false;
                    }else{
                        a.pop();
                    }
                }else if(s[i] == ']'){
                    if(a.top() != '['){
                        return false;
                    }else{
                        a.pop();
                    }
                }else if(s[i] == '}'){
                    if(a.top() != '{'){
                        return false;
                    }else{
                        a.pop();
                    }
                }
            }else{
                return false;
            }
        }
        
        return a.empty();
        
    }
};