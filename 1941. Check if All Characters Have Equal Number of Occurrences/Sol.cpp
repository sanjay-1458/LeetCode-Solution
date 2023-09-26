class Solution {
public:
    bool areOccurrencesEqual(string s) {
        int n=s.size();
        int arr[26];
        for(int i=0;i<26;++i){
            arr[i]=0;
        }
        for(int i=0;i<n;++i){
            int val=s[i]-'a';
            arr[val]++;
        }
        int mini=1000;
        int maxi=1;
        for(int i=0;i<26;++i){
            maxi=max(maxi,arr[i]);
            if(arr[i]!=0){
                mini=min(mini,arr[i]);
            }
        }
        if(mini==maxi)
            return true;
        else
            return false;
    }
};
