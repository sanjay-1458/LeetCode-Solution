class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int j=0;
        string ans="";
        while(j<strs[0].size()){
            bool flag=true;
            char ch=strs[0][j];
            for(int l=1;l<strs.size();++l){
                if(ch!=strs[l][j]){
                    flag=false;
                    break;
                }
            }
            if(flag){
                ans+=ch;
            }
            j++;
            if(!flag){
                break;
            }
        }
        return ans;
    }
};
