//Approach 1- checking issafe by traversal
/*class Solution {
public:
    bool isSafe(int row,int col,vector<string>& board, int n){
        int rowcpy=row, colcpy=col;
        while(row>=0 && col>=0){
            if(board[row][col]=='Q') return false;
            row--;
            col--;
        }
        row=rowcpy;
        col=colcpy;
        while(col>=0){
            if(board[row][col]=='Q') return false;
            col--;
        }
        col=colcpy;
        while(row<n && col>=0){
            if(board[row][col]=='Q') return false;
            col--;
            row++;
        }
        return true;
    }
    void solve(int col, vector<string>& board, vector<vector<string>>& ans, int n){
        if(col==n){
            ans.push_back(board);
            return;
        }
        for(int row=0;row<n;row++){
            if(isSafe(row,col,board,n)){
                board[row][col]='Q';
                solve(col+1,board,ans,n);
                board[row][col]='.';
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;
        vector<string> board(n);
        string s(n,'.');
        for(int i=0;i<n;i++){
            board[i]=s;
        }
        solve(0,board,ans,n);
        return ans;
    }
};*/
//Approach 2- instead of isSafe using hash arrays to check if queen is attacking
class Solution {
public:
    void solve(int col, vector<string>& board, vector<vector<string>>& ans, int n,vector<int>& leftRow,vector<int>& upperDiagonal,vector<int>& lowerDiagonal){
        if(col==n){
            ans.push_back(board);
            return;
        }
        for(int row=0;row<n;row++){
            if(leftRow[row]==0 && lowerDiagonal[row+col]==0 && upperDiagonal[n-1+row-col]==0){
                board[row][col]='Q';
                leftRow[row]=1;
                lowerDiagonal[row+col]=1;
                upperDiagonal[n-1+row-col]=1;
                solve(col+1,board,ans,n,leftRow,upperDiagonal,lowerDiagonal);
                board[row][col]='.';
                leftRow[row]=0;
                lowerDiagonal[row+col]=0;
                upperDiagonal[n-1+row-col]=0;
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;
        vector<string> board(n);
        string s(n,'.');
        for(int i=0;i<n;i++){
            board[i]=s;
        }
        vector<int> leftRow(n,0) , upperDiagonal(2*n-1,0), lowerDiagonal(2*n-1,0);
        solve(0,board,ans,n,leftRow,upperDiagonal,lowerDiagonal);
        return ans;
    }
};
