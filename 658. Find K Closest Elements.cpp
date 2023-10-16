class Solution {
public:
    vector<int> findClosestElements(vector<int>& nums, int k, int x) {
        priority_queue<pair<int,int>> pq;
        for(int i=0;i<nums.size();++i){
            pq.push(make_pair(abs(x-nums[i]),nums[i]));
            if(pq.size()>k){
                pq.pop();
            }
        }
        vector<int> ans;
        while(pq.size()>0){
            ans.push_back(pq.top().second);
            pq.pop();
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};




class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        priority_queue<pair<int,int>> pq;
        vector<int> ans;
        for(int i=0;i<arr.size();++i){
            if(pq.size()==k && abs(arr[i]-x)>pq.top().first){
                continue;
            }
            pq.push(make_pair(abs(arr[i]-x),arr[i]));
            if(pq.size()>k){
                pq.pop();
            }
        }
        while(pq.size()>0){
            ans.push_back(pq.top().second);
            pq.pop();
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};
