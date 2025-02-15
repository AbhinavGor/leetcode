class Solution {
public:
    bool canReach(vector<int>& arr, int start) {
        vector<bool> v(arr.size(), false);
        
        return solve(arr, start, v);
    }

    bool solve(vector<int>&arr, int start, vector<bool>& v) {
        if(start < 0 || start >= arr.size()) return false;

        if(arr[start] == 0) return true;
        if(v[start]) return false;

        v[start] = true;

        return solve(arr, start - arr[start], v) || solve(arr, start + arr[start], v);

    }
};