class Solution {

public:
    string oddString(vector<string>& words) {
        string ans="";
        map<vector<int>,pair<int,int>> mp;
        for(int i=0;i<words.size();++i){
            string word=words[i];
            vector<int> diff(word.size(),0);
            for(int i=0;i<word.size()-1;++i){
                diff[i]=word[i+1]-word[i];
            }
            mp[diff].first++;
            mp[diff].second=i;
        }
        for(auto x:mp){
            if(x.second.first==1){
                ans=words[x.second.second];
            }
        }
        return ans;
    }
};
