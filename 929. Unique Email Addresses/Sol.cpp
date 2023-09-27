class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        int ans=0;
        set<string> st;
        for(int i=0;i<emails.size();++i){
            string w="",z="";
            string d=emails[i];
            int j=0;
            for(j=0;j<d.size();++j){
                if(d[j]=='.'){
                    continue;
                }
                else if(d[j]=='+' || d[j]=='@'){
                    break;
                }
                else{
                    w+=d[j];
                }
            }
            j=0;
            while(d[j]!='@'){
                j++;
            }
            for(int k=j;k<d.size();++k){
                z+=d[k];
            }
            st.insert(w+z);
        }
        return st.size();
    }
};
