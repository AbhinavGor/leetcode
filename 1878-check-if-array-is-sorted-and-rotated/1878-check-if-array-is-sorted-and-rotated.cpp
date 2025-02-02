class Solution {
public:
    bool check(vector<int>& nums) {
        int c = 0, n = nums.size();
        bool res = true;

        for(int s = 0; s < n; s++) {
            bool temp = true;
            for(int i = 0; i < n - 1; i++) {
                if(nums[(i+s)%n] > nums[(i + s + 1)%n]) {
                    temp = false;
                }
            }

            res = temp;
            if (res) {
                return res;
            }
        }

        return res;
    }
};