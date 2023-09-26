class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        int arr[101];
        for(int i=0;i<101;++i){
            arr[i]=0;
        }
        int sum=0;
        for(int i=0;i<nums.size();++i){
            if(arr[nums[i]]==0){
                sum+=nums[i];
                arr[nums[i]]=1;
            }
            else if(arr[nums[i]]==1){
                sum-=nums[i];
                arr[nums[i]]=-1;
            }
            else{
                continue;
            }
        }
        return sum;
    }
};
