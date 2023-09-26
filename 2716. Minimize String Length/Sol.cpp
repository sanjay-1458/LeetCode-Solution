class Solution {
public:
    int minimizedStringLength(string s) {
        vector<int> arr(26,0);
        int cnt=0;
        for(int i=0;i<s.size();++i){
            if(arr[s[i]-'a']==0){
                cnt++;
                arr[s[i]-'a']=1;
            }
            else{
                continue;
            }
        }
        return cnt;
    }
};
