class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(!nums.size()) return nums.size();
        set<int> s;

        for(int i = 0; i < nums.size(); i++) {
            s.insert(nums[i]);
        }

        cout<<s.size()<<endl;

        int max_len = INT_MIN, curr;
        for(int i: s) {
            if(s.find(i - 1) == s.end()) {
                int len = 0;
                while(s.find(i + len) != s.end()) {
                    len += 1;
                }
                max_len = max(len, max_len);
            }
        }

        return max_len;
    }
};