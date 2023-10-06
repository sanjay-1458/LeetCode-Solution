class Solution {
public:
    int arrangeCoins(int n) {
        int ans=0;
        for(long long i=1;i<=n;++i){
            if(((i*(i+1))/2)<=n){
                ans=i;
            }
            else break;
        }
        return ans;
    }
};

class Solution {
public:
    int arrangeCoins(int n) {
        int ans=0;
        int low=1,high=n/2+1;
        long long sum=0;
        while(low<=high){
            long long mid=low+(high-low)/2;
            sum=(mid*(mid+1))/2;
            if(sum<=n){
                ans=mid;
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return ans;
    }
};
