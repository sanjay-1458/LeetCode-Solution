class Solution {
public:
    bool isPathCrossing(string path) {
        set<pair<int,int>> s;
        int n=0,e=0;
        s.insert({n,e});
        for(int i=0;i<path.size();++i){
            if(path[i]=='N'){
                n++;
            }
            else if(path[i]=='S'){
                n--;
            }
            else if(path[i]=='E'){
                e++;
            }
            else{
                e--;
            }
            pair<int,int> p={n,e};
            if(s.find(p)!=s.end()){
                return true;
            }
            else{
                s.insert(p);
            }
        }
        return false;
    }
};
