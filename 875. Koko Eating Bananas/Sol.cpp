class Solution {
    long long int fun(vector<int>&arr,long long mid){
        long long cnt=0;
        for(int i=0;i<arr.size();++i){
            cnt+=arr[i]/mid;
            if(arr[i]%mid!=0){
                cnt++;
            }
        }
        return cnt;
    }
public:
    int minEatingSpeed(vector<int>& nums, int h) {
        int mini=nums[0],maxi=nums[0];
        for(int i=0;i<nums.size();++i){
            if(nums[i]>maxi){
                maxi=nums[i];
            }
            if(nums[i]<mini){
                mini=nums[i];
            }
        }
        long long int low=1,high=maxi;
        int ans=high;
        while(low<=high){
            long long int mid=low+(high-low)/2;
            long long int time=fun(nums,mid);
            if(time>h){
                low=mid+1;
            }
            else{
                ans=mid;
                high=mid-1;
            }
        }
        return low;
    }
};
