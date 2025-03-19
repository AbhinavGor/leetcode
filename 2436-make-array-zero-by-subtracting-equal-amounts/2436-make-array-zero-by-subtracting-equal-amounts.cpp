class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        unordered_map<int, int> m;
        for(int i: nums) m[i]++;

        if(m.find(0)==m.end()) return m.size();
        return m.size() - 1;
    }
};