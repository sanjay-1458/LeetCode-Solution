class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        vector<int> net(26,0);
        for(int i=0;i<chars.size();++i){
            net[chars[i]-'a']++;
        }
        int val=0;
        for(int i=0;i<words.size();++i){
            vector<int> ans(26,0);
            for(int j=0;j<words[i].size();++j){
                ans[words[i][j]-'a']++;
            }
            bool flag=true;
            for(int j=0;j<26;++j){
                if(net[j]>=ans[j]){
                    continue;
                }
                else{
                    flag=false;
                    break;
                }
            }
            if(flag){
                val+=words[i].size();
            }
        }
        return val;
    }
};
