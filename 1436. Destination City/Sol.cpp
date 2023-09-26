class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        int n=paths.size();
        map<string,string> mp;
        for(int i=0;i<n;++i){
            mp[paths[i][0]]=paths[i][1];
        }
        string s="";
        for(auto x:mp){
            string w=x.second;
            if(mp.find(w)==mp.end()){
                s=w;
                break;
            }
        }
        return s;
    }
};
