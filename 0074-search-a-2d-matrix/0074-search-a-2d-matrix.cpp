class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        // find row
        int p = matrix.size(), q = matrix[0].size();
        int t = 0, b = p - 1;
        int m = t + (b-t)/2;

        while(t < b) {
            if(matrix[m][0] <= target && target <= matrix[m][q-1]) {
                break;
            } else if(matrix[m][0] > target) {
                // search top rows
                b = m - 1;
            } else {
                // search bottom rows
                t = m + 1;
            }
            m = t + (b - t)/2;
        }
        
        int target_row = m;
        cout<<m<<" ";
        vector<int> t_row = matrix[m];

        int l = 0, r = q - 1;
        m = l + (r-l)/2;

        if(t_row[m] == target || t_row[l] == target || t_row[r] == target) {
                return true;
        }

        // find col
        while(l < r) {
            if(t_row[m] == target || t_row[l] == target || t_row[r] == target) {
                return true;
            }

            if(t_row[m] < target) {
                l = m + 1;
            } else if(t_row[m] > target) {
                r = m-1;
            }
            m = l + (r-l)/2;
        }

        return false;
        
    }
};