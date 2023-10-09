class Solution {
public:
    int strStr(string haystack, string needle) {
        int ans=-1;
        int i=0;
        while(i<haystack.size()){
            if(haystack[i]!=needle[0]){
                i++;
            }
            else{
                bool flag=true;
                ans=i;
                int pos=i;
                for(int j=0;j<needle.size();++j){
                    if(haystack[pos]==needle[j]){
                        pos++;
                    }
                    else{
                        flag=false;
                        break;
                    }
                }
                if(flag){
                    return ans;
                }
                i++;
            }
        }
        return -1;
    }
};
