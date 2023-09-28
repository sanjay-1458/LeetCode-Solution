class Solution {
public:
    int romanToInt(string s) {
        map<char,int> mp;
        mp['I']=1;
        mp['V']=5;
        mp['X']=10;
        mp['L']=50;
        mp['C']=100;
        mp['D']=500;
        mp['M']=1000;
        int ans=0;
        int i=0;
        while(i<s.size()){
            if(i==s.size()-1){
                ans+=mp[s[i]];
                break;
            }
            int val1=mp[s[i]],val2=mp[s[i+1]];
            if(val1>=val2){
                ans+=val1;
                i++;
            }
            else{
                ans+=val2-val1;
                i+=2;
            }
        }
        return ans;
    }
};
