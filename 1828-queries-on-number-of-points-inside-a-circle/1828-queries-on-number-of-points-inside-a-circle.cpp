class Solution {
public:
    vector<int> countPoints(vector<vector<int>>& points, vector<vector<int>>& queries) {
        vector<int> res;

        for(int i = 0; i < queries.size(); i++){
            int count = 0, r2 = queries[i][2]*queries[i][2];
            for(int j = 0; j < points.size(); j++){
                int dx = points[j][0] - queries[i][0], dy = points[j][1] - queries[i][1];
                int dist = dx*dx + dy*dy;
                if(dist <= r2){
                    count++;
                }
            }
            res.push_back(count);
        }

        return res;
    }
};