class Solution {
public:
    int partitionString(string s) {
        int res = 0, start = 0;
        vector<int> last(26, -1);
        
        for(int i = 0; i < s.size(); i++){
            if(last[s[i] - 'a'] >= start){
                res++;
                start = i;
            }
            last[s[i] - 'a'] = i;
        }
        
        return res+1;
    }
};