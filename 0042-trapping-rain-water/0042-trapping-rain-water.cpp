class Solution {
public:
    int trap(vector<int>& height) {
        vector<int> max_left, tr;
        vector<int> max_right(height.size(), 0);
        int m = 0;

        for(int i: height) {
            max_left.push_back(m);
            m = max(m, i);
        }

        m = 0;
        for(int i = height.size() - 1; i >=0;i--) {
            max_right[i] = m;
            m = max(m, height[i]);
        }

        for(int i = 0; i <height.size(); i++) {
            tr.push_back(min(max_left[i], max_right[i]));
        }

        int res = 0;

        for(auto i: max_left) cout<<i<<" ";
        cout<<endl;

        for(auto i: tr) cout<<i<<" ";
        cout<<endl;

        for(int i = 0; i < height.size(); i++) {
            if(tr[i]-height[i] > 0) {
                res += tr[i]-height[i];
            }
        }

        return res;

    }
};