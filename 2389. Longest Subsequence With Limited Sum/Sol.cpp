class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        sort(nums.begin(),nums.end());
        for(int i=1;i<nums.size();++i){
            nums[i]+=nums[i-1];
        }
        vector<int> ans(queries.size(),0);
        for(int i=0;i<ans.size();++i){
            int target=queries[i];
            int low=0,high=nums.size()-1;
            while(low<=high){
                int mid=low+(high-low)/2;
                if(nums[mid]<=target){
                    low=mid+1;
                }
                else{
                    high=mid-1;
                }
            }
            ans[i]=high+1;
        }
        return ans;
    }
};
