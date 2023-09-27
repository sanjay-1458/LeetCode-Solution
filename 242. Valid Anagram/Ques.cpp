class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> ans(26,0);
        for(int i=0;i<s.size();++i){
            ans[s[i]-'a']++;
        }
        for(int i=0;i<t.size();++i){
            if(ans[t[i]-'a']>0){
                ans[t[i]-'a']--;
            }
            else{
                return false;
            }
        }
        for(int i=0;i<26;++i){
            if(ans[i]>0){
                return false;
            }
        }
        return true;
    }
};
