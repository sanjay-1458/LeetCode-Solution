class Solution {
    int f(vector<int>&arr,long long mid,int k){
        int ans=0,cnt=k;
        for(int i=0;i<arr.size();++i){
            if(arr[i]<=mid){
                cnt--;
            }
            else{
                cnt=k;
            }
            if(cnt==0){
                ans++;
                cnt=k;
            }
        }
        return ans;
    }
        
public:
    int minDays(vector<int>& arr, int m, int k) {
    	int ans=-1;
        int maxi=arr[0];
        for(int i=0;i<arr.size();++i){
            if(arr[i]>maxi){
                maxi=arr[i];
            }
        }
        long long int low=1,high=maxi;
        while(low<=high){
            long long mid=low+(high-low)/2;
            int cnt=f(arr,mid,k);
            if(cnt==0){
                low=mid+1;
            }
            else if(cnt>=m){
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





class Solution {
    int fun(vector<int>&arr,int mid,int k){
        int cnt=k,ans=0;
        for(int i=0;i<arr.size();++i){
            if(arr[i]<=mid){
                cnt--;
            }
            else{
                cnt=k;
            }
            if(cnt==0){
                ans++;
                cnt=k;
            }
        }
        return ans;
    }
public:
    int minDays(vector<int>& nums, int m, int k) {
        if((long long)m*k>(long long)nums.size()) return -1;
        int mini=nums[0],maxi=nums[0];
        for(int i=0;i<nums.size();++i){
            if(nums[i]>maxi){
                maxi=nums[i];
            }
            if(nums[i]<mini){
                mini=nums[i];
            }
        }
        int low=mini,high=maxi;
        int ans=-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            int bouq=fun(nums,mid,k);
            if(bouq<m){
                low=mid+1;
            }
            else{
                ans=mid;
                high=mid-1;
            }
        }
        if(low==nums.size()) low=-1;
        return ans;
    }
};
