class Compare{
    public:
        bool operator()(pair<int,int>& below, pair<int,int>& above){
            if(below.first>above.first){
                return true;
            }
            else if(below.first == above.first && below.second<above.second){
                return true;
            }
            return false;
        }
};

class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int,int> ump;
        vector<int> ans;
	    for(int i=0;i<nums.size();++i){
	        ump[nums[i]]++;
	    }
	    priority_queue<pair<int,int>,vector<pair<int,int>>,Compare> minHeap;
	    for(auto x:ump){
	        minHeap.push(make_pair(x.second,x.first));
	    }
	    while(!minHeap.empty()){
	        int k=minHeap.top().first;
	        int val=minHeap.top().second;
	        minHeap.pop();
	        while(k--){
                ans.push_back(val);
	        }
	    } 
        return ans;
    }
};
