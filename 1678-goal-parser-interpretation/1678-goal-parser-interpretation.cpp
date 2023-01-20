class Solution {
public:
    string interpret(string command) {
        string res = "";
        stack<char> s;
        
        for(int i = 0; i < command.size(); i++){
            switch(command[i]) {
                case 'G':
                    res += "G";
                    break;
                case '(':
                    s.push('(');
                    break;
                case ')':
                    if(s.top() == '('){
                        s.push(')');
                        res += "o";
                    }else{
                        res += "al";
                    }
                    break;
                case 'a':
                    s.push('a');
                    break;
                case 'l':
                    s.push('l');
                    break;
                default:
                    continue;
            }
        }
        
        return res;
    }
};