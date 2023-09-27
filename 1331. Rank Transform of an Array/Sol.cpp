class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        set<int> st;
        for(int i=0;i<arr.size();++i){
            st.insert(arr[i]);
        }
        unordered_map<int,int> mp;
        set<int>::iterator it;
        int pos=1;
        for(it=st.begin();it!=st.end();++it){
            mp[*it]=pos;
            pos++;
        }
        vector<int> ans(arr.size(),0);
        for(int i=0;i<arr.size();++i){
            ans[i]=mp[arr[i]];
        }
        return ans;
    }
};
