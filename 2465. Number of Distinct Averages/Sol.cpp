class Solution {
public:
    int distinctAverages(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int low=0,high=nums.size()-1;
        set<float> st;
        while(low<high){
            float a=((float)nums[low]+nums[high])/2;
            st.insert(a);
            low++;
            high--;
        }
        return st.size();
    }
};
