class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int ans=0;
        for(int i=0;i<grid.size();++i){
            int low=0,high=grid[i].size()-1;
            int cnt=-1;
            while(low<=high){
                int mid=low+(high-low)/2;
                if(grid[i][mid]<0){
                    cnt=mid;
                    high=mid-1;
                }
                else{
                    low=mid+1;
                }
            }
            if(cnt!=-1)
                ans+=grid[i].size()-cnt;
        }
        return ans;
    }
};
