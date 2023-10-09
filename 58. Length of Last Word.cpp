class Solution {
public:
    int lengthOfLastWord(string s) {
        string ans="";
        int j=s.size()-1;
        bool flag=false;
        while(j>=0){
            if(s[j]==' ' && flag==false){
                j--;
            }
            else if(s[j]==' ' && flag==true){
                break;
            }
            else{
                flag=true;
                ans+=s[j];
                j--;
            }
        }
        return ans.size();
    }
};
