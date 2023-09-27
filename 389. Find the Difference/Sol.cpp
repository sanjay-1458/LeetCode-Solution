class Solution {
public:
    char findTheDifference(string s, string t) {
        vector<int> ans(26,0);
        char val='$';
        for(int i=0;i<s.size();++i){
            ans[s[i]-'a']++;
        }
        for(int i=0;i<t.size();++i){
            ans[t[i]-'a']--;
            if(ans[t[i]-'a']==-1){
                val=t[i];
                break;
            }
        }
        return val;
    }
};
