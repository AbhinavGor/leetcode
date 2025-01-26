class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> res;

        generate(0, 0, n, "", res);

        return res;
    }

private:
    void generate(int o, int c, int n, string s, vector<string>& res) {
        if(o == n && c == n) {
            res.push_back(s);
            return;
        }
        if(o < n) {
            generate(o+1, c, n, s + '(', res);
        }

        if(o > c) {
            generate(o, c+1, n, s + ')', res);
        }
    }
};