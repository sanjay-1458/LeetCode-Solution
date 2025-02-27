class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix.size(),m=matrix[0].size();
        for(int i=0;i<n;++i){
            int low=0,high=m-1;
            while(low<=high){
                int mid=low+(high-low)/2;
                if(matrix[i][mid]==target){
                    return true;
                }
                else if(matrix[i][mid]>target){
                    high=mid-1;
                }
                else{
                    low=mid+1;
                }
            }
        }
        return false;
    }
};



class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix.size(),m=matrix[0].size();
        int row=0,col=m-1;
        while(row<n && col>=0){
            if(matrix[row][col]==target){
                return true;
            }
            else if(matrix[row][col]>target){
                col--;
            }
            else{
                row++;
            }
        }
        return false;
    }
};
