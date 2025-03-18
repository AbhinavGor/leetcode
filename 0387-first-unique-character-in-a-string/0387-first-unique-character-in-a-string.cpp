class Solution {
public:
    int firstUniqChar(string s) {
        queue<char> q;
        unordered_map<char, int> m;

        for(char c: s) {
            q.push(c);
            m[c]++;
        }

        while(!q.empty()) {
            char c = q.front();
            q.pop();

            if(m[c] == 1) return s.size() - q.size() - 1;
        }

        return -1;
    }
};