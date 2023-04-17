class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i = 0; i < board.size(); i++){
            unordered_map<char, int> row, col;
            
            //checks rows and columns
            for(int j = 0; j < board[i].size(); j++){
                if(board[i][j] != '.'){
                    if(!row[board[i][j]]){
                        row[board[i][j]] = 1;
                    }else{
                        return false;
                    }
                }
                
                if(board[j][i] != '.'){
                    if(!col[board[j][i]]){
                        col[board[j][i]] = 1;
                    }else{
                        return false;
                    }
                }
            }
        }
        int sq[9][9] = {0};
         for(int r = 0; r < 9; ++r){
            for(int c = 0; c < 9; ++c){
                if(board[r][c] == '.')
                    continue;

                int idx = board[r][c] - '0' - 1;
                int area = (r/3) * 3 + (c/3);

                //if number already exists
                if(sq[area][idx] == 1){
                    return false;
                }

                sq[area][idx] = 1;
            }
        }
        
        return true;
    }
};