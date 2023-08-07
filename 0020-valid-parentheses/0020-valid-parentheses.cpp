class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        
        for(int i = 0; i < s.size(); i++){
            if(s[i] == '(' || s[i] == '[' || s[i] == '{'){
                st.push(s[i]);
            }else if(!st.empty()){
                char temp = st.top();
                if((temp == '(' && s[i] == ')') || (temp == '[' && s[i] == ']') || (temp == '{' && s[i] == '}')){
                    cout<<st.top()<<endl;
                    st.pop();
                    continue;
                }else{
                    return false;
                }
            }else{
                return false;
            }
        }
        
        return st.empty();
    }
};