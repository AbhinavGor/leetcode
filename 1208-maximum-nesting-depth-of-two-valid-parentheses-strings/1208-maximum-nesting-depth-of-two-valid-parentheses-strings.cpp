class Solution {
public:
    vector<int> maxDepthAfterSplit(string seq) {
        vector<int> res;
        int d = 0;

        for(int i = 0; i < seq.length(); i++) {
            if(seq[i] =='(') {
                d++;
            }
            res.push_back(d%2);
            if(seq[i] ==')') {
                d--;
            }
        }

        return res;
    }
};