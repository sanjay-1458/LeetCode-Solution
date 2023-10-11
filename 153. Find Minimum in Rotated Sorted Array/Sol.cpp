class Solution {
public:
    int findMin(vector<int>& arr) {
        int n=arr.size();
        if(n==1) return arr[0];
        int low=0,high=n-1;
        int ans=arr[0];
        while(low<=high){
            int mid=low+(high-low)/2;
            if(mid!=0 && mid !=n-1 && (arr[mid]<=arr[mid+1] && arr[mid]<=arr[mid-1])){
                ans= arr[mid];
                break;
            }
            else if(arr[low]<=arr[mid]){
                if(arr[low]>arr[high]){
                    low=mid+1;
                }
                else{
                    ans= arr[low];
                    break;
                }
            }
            else{
                if(arr[low]>=arr[mid]){
                    high=mid-1;
                }
                else{
                    ans= arr[low];
                    break;
                }
            }
        }
        return ans;
    }
};



class Solution {
public:
    int findMin(vector<int>& nums) {
        int ans=nums[nums.size()-1];
        int low=0,high=nums.size()-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(nums[mid]<nums[high]){
                ans=min(ans,nums[mid]);
                high=mid-1;
            }
            else{
                ans=min(ans,nums[low]);
                low=mid+1;
            }
        }
        return ans;
    }
};
