class Solution {
public:
    int findLucky(vector<int>& arr) {
        int maxi=-1;
        map<int,int> mp;
        for(int i=0;i<arr.size();++i){
            mp[arr[i]]++;
        }
        for(auto x:mp){
            if(x.first==x.second){
                maxi=x.first;
            }
        }
        return maxi;
    }
};
