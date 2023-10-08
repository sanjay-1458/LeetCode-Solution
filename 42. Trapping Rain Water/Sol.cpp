class Solution {
public:
    int trap(vector<int>& nums) {
        int n=nums.size();
        vector<int> left(n,0),right(n,0);
        int sum=0;
        left[0]=nums[0],right[n-1]=nums[n-1];
        for(int i=1;i<n;++i){
            left[i]=max(left[i-1],nums[i]);
        }
        for(int i=n-2;i>=0;--i){
            right[i]=max(right[i+1],nums[i]);
        }
        for(int i=0;i<n;++i){
            sum+=min(left[i],right[i])-nums[i];
        }
        return sum;
    }
};
