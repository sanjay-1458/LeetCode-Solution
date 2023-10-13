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



class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int low=0,high=matrix.size()*matrix[0].size()-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            int pos1=mid/matrix[0].size();
            int pos2=mid%matrix[0].size();
            if(matrix[pos1][pos2]==target){
                return true;
            }
            else if(matrix[pos1][pos2]<target){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return false;
    }
};
