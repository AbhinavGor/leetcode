class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
        unordered_map<string, int> m;
        
        for(int i = 0; i < words1.size(); i++){
            m[words1[i]]++;
        }
        
        for(int i = 0; i < words2.size(); i++){
            if(m[words2[i]] < 2){
                m[words2[i]]--;
            }
        }
        
        
        int count = 0;
        for(auto x: m){
            cout<<x.first<<" "<<x.second<<endl;
            if(x.second == 0){
                count++;
            }
        }
        
        return count;
    }
};