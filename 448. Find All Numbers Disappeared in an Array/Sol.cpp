class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        set<int> st;
        for(int i=1;i<=nums.size();++i){
            st.insert(i);
        }
        for(int i=0;i<nums.size();++i){
            st.erase(nums[i]);
        }
        vector<int> ans(st.begin(),st.end());
        return ans;
    }
};
