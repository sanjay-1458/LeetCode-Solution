class Solution {
public:
    int rearrangeCharacters(string s, string target) {
        vector<int> t(26,0),c(26,0);
        for(int i=0;i<s.size();++i){
            c[s[i]-'a']++;
        }
        for(int i=0;i<target.size();++i){
            t[target[i]-'a']++;
        }
        int cnt=100;
        for(int i=0;i<26;++i){
            if(t[i]!=0){
                if(t[i]<=c[i]){
                    cnt=min(cnt,c[i]/t[i]);
                }
                else{
                    cnt=0;
                    break;
                }
            }
        }
        return cnt;
    }
};
