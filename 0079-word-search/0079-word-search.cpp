class Solution {
public:
     bool solve(vector<vector<char>>& board, int i, int j, string &word,
              vector<int> &delRow, vector<int> &delCol, int k){
        
        if(k == word.size()) return true;
        
        if(i < 0 || i >= board.size() || j < 0 || j >= board[0].size() || board[i][j] != word[k]) return false;
        
        char ch = board[i][j];
        board[i][j] = '*';
        
        for(int v = 0; v < 4; v++){
            int r = i + delRow[v];
            int c = j + delCol[v];
            
            if(solve(board, r, c, word, delRow, delCol, k+1)) return true;
        }
        board[i][j] = ch;
        return false;
    }
    bool exist(vector<vector<char>>& board, string word) {
        vector<int> delRow = {-1, 0, +1, 0};
        vector<int> delCol = {0, +1, 0, -1};
        
        for(int i = 0; i < board.size(); i++){
            for(int j = 0; j < board[0].size(); j++){
                if(solve(board, i, j, word, delRow, delCol, 0)) return true;
            }
        }
        return false;
    }
};