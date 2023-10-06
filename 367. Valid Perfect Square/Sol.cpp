class Solution {
public:
    bool isPerfectSquare(int num) {
        int low=1,high=num;
        while(low<=high){
            long long int mid=low+(high-low)/2;
            cout<<mid<<endl;
            if(mid*mid==(long long)num) return true;
            else if(mid*mid>(long long)num) high=mid-1;
            else low=mid+1;
        }
        return false;
    }
};
