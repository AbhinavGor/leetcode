class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temp) {
        int s = temp.size();
        vector<int> res(s);
        stack<pair<int, int>> t;
        
        for(int i = 0; i < s; i++){
            int currDay = i, currTemp = temp[i];
            
            while(!t.empty() && t.top().second < currTemp){
                int a = t.top().first;
                t.pop();
                
                res[a] = currDay - a;
            }
            
            t.push({currDay, currTemp});
        }
        
        return res;
    }
};