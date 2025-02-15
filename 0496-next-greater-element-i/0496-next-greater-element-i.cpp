class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> m;
        vector<int> res;

        stack<int> s;

        for(int n: nums2) {
            while(!s.empty() && s.top() < n){
                m[s.top()] = n;
                s.pop();
            }
            s.push(n);
        }

        for(int n: nums1) {
            if(m.find(n) != m.end()) {
                res.push_back(m[n]);
            } else {
                res.push_back(-1);
            }
        }

        return res;
    }
};