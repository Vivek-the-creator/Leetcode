class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<unordered_map<char, int>> rows(9);
        vector<unordered_map<char, int>> cols(9);
        vector<unordered_map<char, int>> box(9);
        for(int i=0; i<9; i++){
            for(int j=0; j<9; j++){
                if(board[i][j] == '.'){
                    continue;
                }
                char num = board[i][j];
                int b = (i/3)*3 + (j/3);
                rows[i][num]++;
                cols[j][num]++;
                box[b][num]++;
                if(rows[i][num] > 1 || cols[j][num] > 1 || box[b][num] > 1){
                    return false;
                }
            }
        }
        return true;
    }
};