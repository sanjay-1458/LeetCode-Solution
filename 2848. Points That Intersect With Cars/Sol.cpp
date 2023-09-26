class Solution {
public:
    int numberOfPoints(vector<vector<int>>& arr) {
        int n=arr.size();
        vector<vector<int>> ans;
        if(n==1) return (arr[0][1]-arr[0][0]+1);
        sort(arr.begin(),arr.end());
        for(int i=0;i<n-1;++i){
            int el1=arr[i][1],el2=arr[i+1][0];
            if(el1>=el2){
                arr[i+1][0]=arr[i][0];
                arr[i+1][1]=max(arr[i][1],arr[i+1][1]);
                if(i==n-2){
                    ans.push_back(arr[i+1]);
                }
            }
            else{
                ans.push_back(arr[i]);
                if(i==n-2){
                    ans.push_back(arr[i+1]);
                }
            }
        }
        int count=0;
        for(int i=0;i<ans.size();++i){
            count+=ans[i][1]-ans[i][0]+1;
        }
        return count;
    }
};



class Solution {
public:
    int numberOfPoints(vector<vector<int>>& nums) {
        set<int> s;
        for(int i=0;i<nums.size();++i){
            int start=nums[i][0],end=nums[i][1];
            for(int j=start;j<=end;++j){
                if(s.size()==0 || s.find(j)==s.end()){
                    s.insert(j);
                }
            }
        }
        return s.size();
    }
};
