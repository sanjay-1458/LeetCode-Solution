class Solution {
    int rev(int n){
        long long ans=0;
        while(n>0){
            int rem=n%10;
            ans=ans*10;
            ans+=rem;
            n=n/10;
        }
        int val=INT_MAX;
        if(ans>val) return 0;
        return ans;
    }
public:
    int reverse(int x) {
        if(!x) return x;
        int y=rev(abs(x));
        if(x<0){
            y=-y;
        }
        return y;
    }
};
