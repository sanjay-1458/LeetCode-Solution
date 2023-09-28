class Solution {
public:
    int mostFrequent(vector<int>& nums, int key) {
        map<int,int> mp;
        for(int i=0;i<nums.size()-1;++i){
            int k=nums[i],val=nums[i+1];
            if(k==key){
                mp[nums[i+1]]++;
            }
        }
        int ans=0,cnt=0;
        for(auto x:mp){
            if(x.second>cnt){
                ans=x.first;
                cnt=x.second;
            }
        }
        return ans;
    }
};
