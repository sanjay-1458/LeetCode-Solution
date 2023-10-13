class Solution {
    int fun(vector<int>&arr,int pages){
        int cnt=1,sum=arr[0];
        for(int i=1;i<arr.size();++i){
            if(sum+arr[i]<=pages){
                sum+=arr[i];
            }
            else{
                cnt++;
                sum=arr[i];
            }
        }
        return cnt;
    }
public:
    int splitArray(vector<int>& arr, int m) {
        int maxi=arr[0],sum=0;
        // if(n<m) return -1;
        int n=arr.size();
        for(int i=0;i<n;++i){
            if(maxi<arr[i]){
                maxi=arr[i];
            }
            sum+=arr[i];
        }
        int low=maxi,high=sum,ans=-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            int cnt=fun(arr,mid);
            if(cnt>m){
                low=mid+1;
            }
            else if(cnt<m){
                high=mid-1;
            }
            else{
                high=mid-1;
            }
        }
        return low;
    }
};



class Solution {
    int fun(vector<int>&arr,int sub){
        int sum=arr[0],cnt=1;
        for(int i=1;i<arr.size();++i){
            if(arr[i]+sum>sub){
                sum=arr[i];
                cnt++;
            }
            else{
                sum+=arr[i];
            }
        }
        return cnt;
    }
public:
    int splitArray(vector<int>& nums, int k) {
        int maxi=nums[0],sum=0;
        for(int i=0;i<nums.size();++i){
            if(nums[i]>maxi){
                maxi=nums[i];
            }
            sum+=nums[i];
        }
        int low=maxi,high=sum;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(fun(nums,mid)>k){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return low;
    }
};
