class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        // check rows
        for(int i = 0; i < 9; i++) {
            set<char> s;
            for (int j = 0; j < 9; j++) {
                if(s.find(board[i][j]) != s.end()) {
                    cout<<board[i][j]<<" "<<endl;
                    return false;
                }
                if(isalnum(board[i][j])){
                    s.insert(board[i][j]);
                }
            }
        }

        // Check cols
        unordered_map<int, set<char>> m;
        for(int i = 0; i < 9; i++) {
            set<char> s;
            for (int j = 0; j < 9; j++) {
                if(s.find(board[j][i]) != s.end()) {
                    cout<<'here'<<endl;
                    return false;
                }
                if(isalnum(board[j][i])) {
                    s.insert(board[j][i]);
                }
            }
        }

        // check in each 3x3 box
        vector<vector<set<char>>> s;

        for(int i = 0; i < 3; i++) {
            vector<set<char>> temp;
            s.push_back(temp);
            for (int j = 0; j < 3; j++) {
                set<char> t;
                s[i].push_back(t);
            }
        }

        for(int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                if(s[(int)i/3][(int)j/3].find(board[i][j]) != s[(int)i/3][(int)j/3].end()) {
                    cout<<board[i][j]<<" "<<i<<" "<<j<<endl;
                    return false;
                }
                if(isalnum(board[i][j])){
                    s[(int)i/3][(int)j/3].insert(board[i][j]);
                }
            }
        }

        return true;
    }
};