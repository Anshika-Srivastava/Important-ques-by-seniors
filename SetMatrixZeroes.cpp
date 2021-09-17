class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n=matrix.size();//variable to store number of rows
        int m=matrix[0].size();//variable to store number of columns
        vector<int> row(n,1), col(m,1);//create row and column vector
        for(int i=0;i<n;i++){//iterate over rows
            for(int j=0;j<m;j++){//iterate over column
                if(matrix[i][j]==0){//if the value for a particular cell is zero
                    row[i]=0;//assign its row value as zero in row vector
                    col[j]=0;//assign its column value as zero in column vector
                }
            }
        }
        
        //Again iterate over each element
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                //And if its corresponding row or column had a zero
                if(row[i]==0 || col[j]==0){
                    //Then change its value to zero
                    matrix[i][j]=0;
                }
            }
        }
    }
};
