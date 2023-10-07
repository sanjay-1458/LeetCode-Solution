class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        int prev=1e5+1;
        for(int i=0;i<nums.size();++i){
            if(nums[i]==prev){
                continue;
            }
            int target=-nums[i];
            int low=i+1,high=nums.size()-1;
            while(low<high){
                int sum=nums[low]+nums[high];
                if(sum>target){
                    high--;
                }
                else if(sum<target){
                    low++;
                }
                else{
                    vector<int> v={nums[i],nums[low],nums[high]};
                    if(ans.empty() || ans.back()!=v)
                        ans.push_back(v);
                    high--;
                    low++;
                }
            }
            prev=nums[i];
        }
        return ans;
    }
};
