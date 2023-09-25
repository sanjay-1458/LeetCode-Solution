class Solution {
public:
    int singleNonDuplicate(vector<int>& arr) {
        if(arr.size()==1) return arr[0];
        int low=0,high=arr.size()-1,ans=-1;
        int first=0;
        while(low<=high){
            int mid=low+(high-low)/2;
            if (mid!=0 && mid!=arr.size()-1 && arr[mid]!=arr[mid-1] && arr[mid]!=arr[mid+1]){
                ans=mid;
                break;
            }
            if(mid==0 || mid==arr.size()-1){
                if(mid==0 && arr[mid]!=arr[mid+1]){ans=mid;break;}
                else if(mid==arr.size()-1 && arr[mid]!=arr[mid-1]) {ans=mid;break;}
            }
            first=mid;
            if(arr[mid]==arr[mid-1]){
                first=mid-1;
            }
            if(first%2==0){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return arr[ans];
    }
};
