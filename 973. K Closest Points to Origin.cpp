typedef pair<int,pair<int,int>> pii;

class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<pii,vector<pii>> maxHeap;
        vector<vector<int>> ans;
        for(int i=0;i<points.size();++i){
            int x=points[i][0],y=points[i][1];
            int dist=x*x+y*y;
            maxHeap.push(make_pair(dist,make_pair(x,y)));
            if(maxHeap.size()>k){
                maxHeap.pop();
            }
        }
        while(!maxHeap.empty()){
            int x1=maxHeap.top().second.first;
            int y1=maxHeap.top().second.second;
            ans.push_back({x1,y1});
            maxHeap.pop();
        }
        return ans;
    }
};
