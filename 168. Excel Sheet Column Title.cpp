class Solution {
    string reverse(string num){
        int low=0,high=num.size()-1;
        while(low<=high){
            swap(num[low],num[high]);
            low++;
            high--;
        }
        return num;
    }
public:
    string convertToTitle(int num) {
        string ans="";
        while(num>0){
            int rem=num%26;
            if(num%26==0){
                ans+='A'+25;
                num--;
            }
            else{
                ans+='A'+rem-1;
            }
            num=num/26;
        }
        ans=reverse(ans);
        return ans;
    }
};
