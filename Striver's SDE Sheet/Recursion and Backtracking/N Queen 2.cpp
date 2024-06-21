// Return no. of soln instead of soln
class Solution {
public:
    void solve(int col, int& cnt, int n,vector<int>& leftRow,vector<int>& upperDiagonal,vector<int>& lowerDiagonal){
        if(col==n){
            cnt++;
            return;
        }
        for(int row=0;row<n;row++){
            if(leftRow[row]==0 && lowerDiagonal[row+col]==0 && upperDiagonal[n-1+row-col]==0){
                leftRow[row]=1;
                lowerDiagonal[row+col]=1;
                upperDiagonal[n-1+row-col]=1;
                solve(col+1,cnt,n,leftRow,upperDiagonal,lowerDiagonal);
                leftRow[row]=0;
                lowerDiagonal[row+col]=0;
                upperDiagonal[n-1+row-col]=0;
            }
        }
    }
    int totalNQueens(int n) { 
        int cnt=0;
        vector<int> leftRow(n,0) , upperDiagonal(2*n-1,0), lowerDiagonal(2*n-1,0);
        solve(0,cnt,n,leftRow,upperDiagonal,lowerDiagonal);
        return cnt;
    }
};
