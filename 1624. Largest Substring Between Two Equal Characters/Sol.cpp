class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        vector<int> ans(26,-1);
        int val=-1;
        for(int i=0;i<s.size();++i){
            if(ans[s[i]-'a']==-1){
                ans[s[i]-'a']=i;
            }
            else{
                val=max(val,i-ans[s[i]-'a']-1);
            }
        }
        return val;
    }
};
