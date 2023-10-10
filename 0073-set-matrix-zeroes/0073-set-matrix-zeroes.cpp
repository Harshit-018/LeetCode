class Solution {
public:
    void markRow(int i,int m, vector<vector<int>>& matrix){
        for(int r=0; r<m; r++){
            if(matrix[i][r]!=0) matrix[i][r]=-1e9;
        }
    }
    void markCol(int j,int n, vector<vector<int>>& matrix){
        for(int c=0; c<n; c++){
            if(matrix[c][j]!=0) matrix[c][j]=-1e9;
        }
    }
    void setZeroes(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(matrix[i][j]==0){
                    markRow(i,m, matrix);
                    markCol(j,n, matrix);
                }
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(matrix[i][j]==-1e9){
                    matrix[i][j]=0;
                }
            }
        }
    }
};