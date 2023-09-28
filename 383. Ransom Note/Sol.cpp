class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        vector<int> ans1(26,0),ans2(26,0);
        for(int i=0;i<ransomNote.size();++i){
            ans1[ransomNote[i]-'a']++;
        }
        for(int i=0;i<magazine.size();++i){
            ans2[magazine[i]-'a']++;
        }
        for(int i=0;i<26;++i){
            if(ans1[i]>ans2[i]){
                return false;
            }
        }
        return true;
    }
};
