class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
        map<string,int> mp1,mp2;
        for(int i=0;i<words1.size();++i){
            mp1[words1[i]]++;
        }
        for(int i=0;i<words2.size();++i){
            mp2[words2[i]]++;
        }
        int cnt=0;
        for(auto x:mp1){
            if(mp2.find(x.first)!=mp2.end()){
                if(x.second==mp2[x.first] && x.second==1){
                    cnt++;
                }
            }
        }
        return cnt;
    }
};
