class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        set<int> s;
        int ans=1000;
        for(int i=0;i<nums.size();++i){
            if(s.size()==0 || s.find(nums[i])==s.end()){
                s.insert(nums[i]);
            }
            else{
                ans=nums[i];
                break;
            }
        }
        return ans;
    }
};
