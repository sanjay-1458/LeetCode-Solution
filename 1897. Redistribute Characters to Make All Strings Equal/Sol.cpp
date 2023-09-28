class Solution {
public:
    bool makeEqual(vector<string>& words) {
        map<int,int> mp;
        for(int i=0;i<words.size();++i){
            string word=words[i];
            for(int j=0;j<word.size();++j){
                mp[word[j]-'a']++;
            }
        }
        for(auto x:mp){
            if(x.second<words.size() || x.second%words.size()!=0){
                return false;
            }
        }
        return true;
    }
};
