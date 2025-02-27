class Solution {
public:
    bool checkAlmostEquivalent(string word1, string word2) {
        vector<int> ans1(26,0),ans2(26,0);
        for(int i=0;i<word1.size();++i){
            ans1[word1[i]-'a']++;
        }
        for(int i=0;i<word2.size();++i){
            ans2[word2[i]-'a']++;
        }
        for(int i=0;i<26;++i){
            if(abs(ans1[i]-ans2[i])>3){
                return false;
            }
        }
        return true;
    }
};
