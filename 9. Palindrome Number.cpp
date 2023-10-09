class Solution {
    int reverse(int n){
        long long int ans=0;
        while(n>0){
            int rem=n%10;
            ans=ans*10;
            ans+=rem;
            n=n/10;
        }
        return ans;
    }
public:
    bool isPalindrome(int x) {
        int y=reverse(abs(x));
        return x==y;
    }
};
