class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix.size(),m=matrix[0].size();
        for(int i=0;i<n;++i){
            int low=matrix[i][0],high=matrix[i][m-1];
            if(target>high){
                continue;
            }
            if(target<low){
                break;
            }
            low=0,high=m-1;
            while(low<=high){
                int mid=low+(high-low)/2;
                if(matrix[i][mid]==target){
                    return true;
                }
                else if(matrix[i][mid]<target){
                    low=mid+1;
                }
                else{
                    high=mid-1;
                }
            }
        }
        return false;
    }
};



