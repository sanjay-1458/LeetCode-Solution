class Solution {
    bool reverse(string s){
        int low=0,high=s.size()-1;
        while(low<=high){
            if(s[low]!=s[high]){
                return false;
            }
            low++;
            high--;
        }
        return true;
    }
public:
    bool isPalindrome(string s) {
        string ans="";
        for(int i=0;i<s.size();++i){
            if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z') || s[i]>='0' && s[i]<='9'){
                if(s[i]>='A' && s[i]<='Z'){
                    ans+=s[i]-'A';
                }
                else if(s[i]>='a' && s[i]<='z'){
                    ans+=s[i]-'a';
                }
                else{
                    ans+=s[i];
                }
            }
        }
        if(ans.size()==0 || reverse(ans)){
            return true;
        }
        return false;
    }
};
