class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> temp(nums1.size()+nums2.size(),0);
        int i=0,j=0;
        while(i<nums1.size() && j<nums2.size()){
            if(nums1[i]<nums2[j]){
                temp[i+j]=nums1[i];
                i++;
            }
            else{
                temp[i+j]=nums2[j];
                j++;
            }
        }
        while(i<nums1.size()){
            temp[i+j]=nums1[i];
            i++;
        }
        while(j<nums2.size()){
            temp[i+j]=nums2[j];
            j++;
        }
        if(temp.size()%2==0){
            double p2=temp[temp.size()/2];
            double p1=temp[temp.size()/2-1];
            cout<<1;
            return (p1+p2)/2;
        }
        else{
            return (double)temp[temp.size()/2];
        }
    }
};
