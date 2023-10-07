class Solution {
public:
    vector<int> findRightInterval(vector<vector<int>>& arr) {
        vector<int> ans(arr.size(),0);
        map<int,int> mp;
        for(int i=0;i<arr.size();++i){
            mp[arr[i][0]]=i;
        }
        sort(arr.begin(),arr.end());
        for(int i=0;i<arr.size();++i){
            int t=arr[i][1];
            int ind=mp[arr[i][0]];
            int low=i,high=arr.size()-1;
            int val=-1;
            while(low<=high){
                int mid=low+(high-low)/2;
                int el=arr[mid][0];
                if(el>=t){
                    val=mp[el];
                    high=mid-1;
                }
                else{
                    low=mid+1;
                }
            }
            ans[ind]=val;
        }
        return ans;
    }
};
