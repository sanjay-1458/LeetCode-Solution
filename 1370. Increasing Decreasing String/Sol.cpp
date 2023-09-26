class Solution {
public:
    string sortString(string s) {
        map<char,int> mp;
        set<char> st;
        for(int i=0;i<s.size();++i){
            mp[s[i]]++;
            st.insert(s[i]);
        }
        string ans="";
        set<char>::iterator it;
        set<char>::reverse_iterator itr;
        while(st.size()>0){
            for(it=st.begin();it!=st.end();++it){
                ans+=*it;
                mp[*it]--;
            }
            for(auto x:mp){
                if(x.second==0){
                    st.erase(x.first);
                }
            }
            if(st.size()==0) break;
            for(itr=st.rbegin();itr!=st.rend();++itr){
                ans+=*itr;
                mp[*itr]--;
            }
            for(auto x:mp){
                if(x.second==0){
                    st.erase(x.first);
                }
            } 
        }
        return ans;
    }
};
