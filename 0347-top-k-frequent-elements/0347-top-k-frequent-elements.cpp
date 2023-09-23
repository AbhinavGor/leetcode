class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        priority_queue<pair<int, int>> q;
        sort(begin(nums), end(nums));
        int c = 1, l = nums[0];
        
        
        for(int i = 1; i < nums.size(); i++) {
            if(l == nums[i]) {
                c++;
            } else {
                cout<<c<<l<<endl;
                q.push(make_pair(c, l));
                l = nums[i];
                c = 1;
            }
        }
        
        q.push(make_pair(c, l));
        
        vector<int> res;
        
        for(int i = 0; i < k; i++) {
            cout<<q.top().first<<" "<<q.top().second<<endl;
            res.push_back(q.top().second);
            q.pop();
        }
        
        
        return res;
    }
};