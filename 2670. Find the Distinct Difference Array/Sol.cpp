class Solution {
public:
    vector<int> distinctDifferenceArray(vector<int>& nums) {
        int n=nums.size();
        vector<int> diff(n,0);
        map<int,int> mp;
        set<int> s;
        for(int i=0;i<n;++i){
            mp[nums[i]]++;
        }
        for(int i=0;i<n;++i){
            s.insert(nums[i]);
            mp[nums[i]]--;
            if(mp[nums[i]]==0){
                mp.erase(nums[i]);
            }
            diff[i]=s.size()-mp.size();
        }
        return diff;
    }
};
