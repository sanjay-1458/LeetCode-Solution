class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans(2,0);
        for(int i=0;i<nums.size();++i){
            for(int j=i+1;j<nums.size();++j){
                if(nums[i]+nums[j]==target){
                    ans[0]=i;
                    ans[1]=j;
                    break;
                }
            }
        }
        return ans;
    }
};

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> mp;
        for(int i=0;i<nums.size();++i){
            mp[target-nums[i]]=i;
        }
        vector<int> ans(2,0);
        for(int i=0;i<nums.size();++i){
            if(mp.find(nums[i])!=mp.end() && i!=mp[nums[i]]){
                ans[0]=i;
                ans[1]=mp[nums[i]];
                break;
            }
        }
        return ans;
    }
};


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> mp;
        vector<int> ans(2,0);
        for(int i=0;i<nums.size();++i){
            int el=nums[i];
            int rem=target-nums[i];
            if(mp.find(rem)==mp.end()){
                mp[el]=i;
            }
            else{
                ans[0]=i;
                ans[1]=mp[rem];
                break;
            }
        }
        return ans;
    }
};
