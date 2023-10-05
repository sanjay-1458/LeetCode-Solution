class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        vector<int> ans;
        int prev=-1;
        for(int i=0;i<nums2.size();++i){
            int target=nums2[i];
            if(prev==target) continue;
            int low=0,high=nums1.size()-1;
            bool flag=false;
            while(low<=high){
                int mid=low+(high-low)/2;
                if(nums1[mid]==target){
                    flag=true;
                    break;
                }
                else if(nums1[mid]>target){
                    high=mid-1;
                }
                else{
                    low=mid+1;
                }
            }
            if(flag){
                ans.push_back(target);
            }
            prev=nums2[i];
        }
        return ans;
    }
};
