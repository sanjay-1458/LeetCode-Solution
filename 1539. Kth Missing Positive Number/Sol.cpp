class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        if(arr[0]>k) return k;
        int low=0,high=arr.size()-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            int miss=arr[mid]-mid-1;
            if(miss<k){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        if(low==arr.size()){
            low--;
            int miss=arr[low]-low-1;
            int pos=k-miss;
            int el=arr[low]+pos;
            return el;
        }
        else{
            int miss=arr[low]-low-1;
            int pos=miss-k+1;
            int el=arr[low]-pos;
            return el;
        }
    }
};



class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        if(arr[0]>k) return k;
        int low=0,high=arr.size()-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            int miss=arr[mid]-mid-1;
            if(miss<k){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        int miss=arr[high]-high-1;
        int pos=k-miss;
        int el=arr[high]+pos;
        return el;
    }
};
