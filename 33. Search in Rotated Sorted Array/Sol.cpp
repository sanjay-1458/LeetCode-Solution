class Solution {
public:
    int search(vector<int>& arr, int target) {
        int ans=-1,n=arr.size();
        int low=0,high=n-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(arr[mid]==target){
                return mid;
            }
            else if(arr[mid]>=arr[low]){
                if(target>=arr[low] && target<arr[mid]){
                    high=mid-1;
                }
                else{
                    low=mid+1;
                }
            }
            else{
                if(target>arr[mid] && target<=arr[high]){
                    low=mid+1;
                }
                else{
                    high=mid-1;
                }
            }
        }
        return ans;
    }
};
