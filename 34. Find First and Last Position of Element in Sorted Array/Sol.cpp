class Solution {
    int first(vector<int>& arr,int n,int k){
        int ans=-1;
        int low=0,high=n-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(arr[mid]==k){
                ans=mid;
                high=mid-1;
            }
            else if(arr[mid]<k){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return ans;
    }

    int last(vector<int>& arr,int n,int k){
        int ans=-1;
        int low=0,high=n-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(arr[mid]==k){
                ans=mid;
                low=mid+1;
            }
            else if(arr[mid]<k){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return ans;
    }

public:
    vector<int> searchRange(vector<int>& arr, int k) {
        int n=arr.size();
        int ans1=first(arr,n,k);
        int ans2=last(arr,n,k);
        return {ans1,ans2};
    }
};
