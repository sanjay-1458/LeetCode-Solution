class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<int,int> mp;
        int ans=-1;
        for(int i=0;i<s.size();++i){
            mp[s[i]-'a']++;
        }
        for(int i=0;i<s.size();++i){
            if(mp[s[i]-'a']==1){
                ans=i;
                break;
            }
        }
        return ans;
    }
};
