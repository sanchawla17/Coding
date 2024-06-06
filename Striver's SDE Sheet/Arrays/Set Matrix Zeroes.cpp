//Brute - change values of row and column to -1 when 0 found
//Better - take row and column array for saving 0 values
//Optimal - take array to save 0 values as 1st row and col in matrix
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int col0=1;
        int row= matrix.size();
        int col= matrix[0].size();
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(matrix[i][j]==0){
                    if(j==0) col0=0;
                    else matrix[0][j]=0;
                    matrix[i][0]=0;
                }
            }
        }
        for(int i=1;i<row;i++){
            for(int j=1;j<col;j++){
                if(matrix[i][0]==0 || matrix[0][j]==0) matrix[i][j]=0;
            }
        }
        if(matrix[0][0]==0){
            for(int j=0;j<col;j++){
                matrix[0][j]=0;
            }
        }
        if(col0==0){
            for(int i=0;i<row;i++){
                matrix[i][0]=0;
            }
        }
    }
};
