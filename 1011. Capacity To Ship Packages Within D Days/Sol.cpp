class Solution {
    int fun(vector<int>&arr,int mid){
        int cap=mid,d=1;
        int sum=0;
        for(int i=0;i<arr.size();++i){
            if(sum+arr[i]>cap){
                sum=arr[i];
                d++;
            }
            else{
                sum+=arr[i];
            }
        }
        return d;
    }
public:
    int shipWithinDays(vector<int>& nums, int days) {
        int maxi=nums[0], sum=0;
        for(int i=0;i<nums.size();++i){
            if(maxi<nums[i]){
                maxi=nums[i];
            }
            sum+=nums[i];
        }
        int low=maxi,high=sum;
        while(low<=high){
            int mid=low+(high-low)/2;
            int d=fun(nums,mid);
            if(d>days){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return low;
    }
};
