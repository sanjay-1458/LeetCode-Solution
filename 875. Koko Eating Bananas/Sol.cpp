class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int maxi=piles[0];
        for(int i=0;i<piles.size();++i){
            if(piles[i]>maxi){
                maxi=piles[i];
            }
        }
        long long low=1,high=maxi,ans=-1;
        while(low<=high){
            long long mid=low+(high-low)/2;
            long long cnt=0;
            for(int i=0;i<piles.size();++i){
                if(piles[i]%mid==0){
                    cnt+=piles[i]/mid;
                }
                else{
                    cnt+=piles[i]/mid+1;
                }
            }
            if(cnt<=h){
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans;
    }
};
