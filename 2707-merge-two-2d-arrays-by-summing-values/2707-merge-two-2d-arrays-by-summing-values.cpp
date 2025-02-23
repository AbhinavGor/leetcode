class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
        int p1 = 0, p2 = 0;
        vector<vector<int>> res;
        while(p1 < nums1.size() && p2 < nums2.size()) {
            if(nums1[p1][0] < nums2[p2][0]) {
                res.push_back(nums1[p1]);
                p1++;
            } else if(nums1[p1][0] > nums2[p2][0]) {
                res.push_back(nums2[p2]);
                p2++;
            } else {
                res.push_back({nums1[p1][0], nums1[p1][1]+nums2[p2][1]});
                p1++;
                p2++;
            }
        }

        while(p1 < nums1.size()) {
            res.push_back(nums1[p1]);
            p1++;
        }
        while(p2 < nums2.size()) {
            res.push_back(nums2[p2]);
            p2++;
        }

        return res;
    }
};