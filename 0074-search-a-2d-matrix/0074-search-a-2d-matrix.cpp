class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
         bool x=false;
        for(int i=0;i<matrix.size();i++){
            if(matrix[i][0]<=target && matrix[i][matrix[i].size()-1]>=target){
                int start=0;
                int end=matrix[i].size()-1;
                while(start<=end){
                    int mid=(start+end)/2;
                    if(matrix[i][mid]==target)
                    {
                        return true;
                    }
                    else if(matrix[i][mid]<target){
                        start=mid+1;
                    }else if(matrix[i][mid]>target){
                        end=mid-1;
                    }
                }
            }
        }
        return x;
    }
};