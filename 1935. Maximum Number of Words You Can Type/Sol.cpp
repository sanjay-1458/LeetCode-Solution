class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        vector<string> ans;
        string s="";
        for(int i=0;i<text.size();++i){
            if(text[i]==' '){
                ans.push_back(s);
                s="";
            }
            else{
                s+=text[i];
            }
            if(i==text.size()-1){
                ans.push_back(s);
            }
        }
        set<char> st;
        for(int i=0;i<brokenLetters.size();++i){
            st.insert(brokenLetters[i]);
        }
        int cnt=0;
        for(int i=0;i<ans.size();++i){
            for(int j=0;j<ans[i].size();++j){
                if(st.find(ans[i][j])!=st.end()){
                    cnt++;
                    break;
                }
            }
        }
        return ans.size()-cnt;
    }
};
