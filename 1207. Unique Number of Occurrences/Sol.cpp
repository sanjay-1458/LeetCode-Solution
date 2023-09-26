class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int,int> mp;
        set<int> s;
        for(int i=0;i<arr.size();++i){
            mp[arr[i]]++;
        }
        for(auto x:mp){
            if(s.size()==0 || s.find(x.second)==s.end()){
                s.insert(x.second);
            }
            else{
                return false;
            }
        }
        return true;
    }
};
