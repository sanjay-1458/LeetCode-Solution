class Solution {
public:
    bool digitCount(string num) {
        map<int,int> need;
        for(int i=0;i<num.size();++i){
            need[i]=num[i]-'0';
        }
        map<int,int> pres;
        for(int i=0;i<num.size();++i){
            pres[num[i]-'0']++;
        }
        for(auto x:need){
            int val=x.first;
            int freq=x.second;
            if(pres.find(val)!=pres.end()){
                if(freq==pres[val]){
                    continue;
                }
                else{
                    return false;
                }
            }
            else{
                if(freq==0){
                    continue;
                }
                else{
                    return false;
                }
            }
        }
        return true;
    }
};
