class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i=0,j=nums.size()-1;
        while(i<=j){
            if(nums[j]==val){
                j--;
                continue;
            }
            if(i>j){break;}
            if(nums[i]!=val){i++;continue;}
            swap(nums[i],nums[j]);
            i++;
            j--;
        }
        return i;
    }
};
