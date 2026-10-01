class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        //row[m]=matrix[..][0];
        //col[n]=matrix[0][..];
        int m=matrix.size();
        int n=matrix[0].size();
        int col0=1;
        //marking the 0th row and column.
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(matrix[i][j]==0){
                    matrix[i][0]=0;
                    if(j!=0){       //for columns apart from the first column.
                        matrix[0][j]=0;
                    }else{
                        col0=0;
                    }
                }
            }
        }
        //changing the non-zero values
        for(int i=1;i<m;i++){
            for(int j=1;j<n;j++){
                if(matrix[i][j]!=0){
                    if(matrix[i][0]==0 || matrix[0][j]==0){
                        matrix[i][j]=0;
                    }
                }
            }
        }
        if(matrix[0][0]==0){     //sets the entrie row 0;
            for(int j=0;j<n;j++){ 
                matrix[0][j]=0;
            }
        }
        if(col0==0){             //sets the entire column 0
            for(int i=0;i<m;i++){
                matrix[i][0]=0;
            }
        }
    }
};