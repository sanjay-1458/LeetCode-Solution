class Solution {
    bool check(vector<int>&arr1,vector<int>&arr2){
        for(int i=0;i<26;++i){
            if(arr1[i]>arr2[i]){
                return false;
            }
        }
        return true;
    }
public:
    string shortestCompletingWord(string licensePlate, vector<string>& words) {
        map<string,int> mp;
        vector<int> ans1(26,0);
        for(int i=0;i<licensePlate.size();++i){
            if((licensePlate[i]>='a' && licensePlate[i]<='z') || (licensePlate[i]>='A' && licensePlate[i]<='Z')){
                if(licensePlate[i]>='A' && licensePlate[i]<='Z'){
                    ans1[licensePlate[i]-'A']++;
                }
                else{
                    ans1[licensePlate[i]-'a']++;
                }
            }
        }
        for(int i=0;i<words.size();++i){
            string word=words[i];
            vector<int> ans2(26,0);
            for(int j=0;j<word.size();++j){
                ans2[word[j]-'a']++;
            }
            bool flag=check(ans1,ans2);
            if(flag){
                mp[word]=word.size();
            }
        }
        string ans="";
        int cnt=INT_MAX;
        for(auto x:mp){
            if(x.second<cnt){
                cnt=x.second;
            }
        }
        for(int i=0;i<words.size();++i){
            string word=words[i];
            if(mp.find(word)!=mp.end() && mp[word]==cnt){
                ans=word;
                break;
            }
        }
        return ans;
    }
};
