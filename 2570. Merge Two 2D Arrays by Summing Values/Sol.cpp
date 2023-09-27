class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
        map<int,int> mp1,mp2,mp3;
        for(int i=0;i<nums1.size();++i){
            mp1[nums1[i][0]]=nums1[i][1];
        }
        for(int i=0;i<nums2.size();++i){
            mp2[nums2[i][0]]=nums2[i][1];
        }
        vector<vector<int>> ans;
        for(auto x:mp1){
            int id=x.first,val=x.second;
            if(mp2.find(id)!=mp2.end()){
                mp3[id]=val+mp2[id];
                mp2.erase(id);
            }
            else{
                mp3[id]=val;
            }
        }
        for(auto x:mp2){
            mp3[x.first]=x.second;
        }
        for(auto x:mp3){
            ans.push_back({x.first,x.second});
        }
        return ans;
    }
};
