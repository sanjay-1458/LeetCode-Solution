class Solution {
    int digitSum(int n){
        int sum=0;
        while(n>0){
            int rem=n%10;
            sum+=rem;
            n=n/10;
        }
        return sum;
    }
public:
    int countBalls(int lowLimit, int highLimit) {
        vector<int> arr(10000+1,0);
        int maxi=0;
        for(int i=lowLimit;i<=highLimit;++i){
            int sum=digitSum(i);
            arr[sum]++;
            maxi=max(maxi,arr[sum]);
        }
        return maxi;
    }
};
