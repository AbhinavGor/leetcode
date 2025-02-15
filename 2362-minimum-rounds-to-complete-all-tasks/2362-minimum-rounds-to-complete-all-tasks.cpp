class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        unordered_map<int, int> m;

        for(int task : tasks) {
            m[task]+=1;
        }

        sort(tasks.begin(), tasks.end());
        
        int res = 0;

        for(auto i: m) {
            if(i.second == 1) {
                return -1;
            } else if(i.second%3 == 0) {
                res+=i.second/3;
            } else {
                res += i.second/3 + 1;
            }
        }

        return res;
    }
};