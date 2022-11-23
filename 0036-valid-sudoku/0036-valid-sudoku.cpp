class Solution {
public:
    bool check(int r, int c, vector<vector<char>>& board, char val){
        for(int i=0;i<9;i++){
            if(i!=r and board[i][c]==val){
                return false;
            }
        }
        for(int j=0;j<9;j++){
            if(j!=c and board[r][j]==val){
                return false;
            }
        }
        int subbox_r= r/3;
        int subbox_c= c/3;
        for(int i=subbox_r*3;i<subbox_r*3+3;i++){
            for(int j=subbox_c*3;j<subbox_c*3+3;j++){
                if(i!=r and j!=c and board[i][j]==val){
                    return false;
                }
            }
        }
        return true;
    }
    bool isValidSudoku(vector<vector<char>>& board) {
         int n=9,m=9;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(board[i][j]!='.'){
                    if(!check(i,j,board, board[i][j])){
                        return false;
                    }
                }
            }
        }
        return true;
    }
};