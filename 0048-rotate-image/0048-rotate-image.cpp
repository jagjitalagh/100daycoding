class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        for(int i=0;i<matrix.size();i++){
            for(int j=i;j<matrix.size();j++){
                int temp=matrix[i][j];
                matrix[i][j]=matrix[j][i];
                matrix[j][i]=temp;
            }
        }
        int n=matrix.size()-1;
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix.size()/2;j++){
                int temp=matrix[i][j];
                matrix[i][j]=matrix[i][n-j];
                matrix[i][n-j]=temp;
            }
        }
       
        
        return ;
    }
};