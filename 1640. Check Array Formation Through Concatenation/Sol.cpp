class Solution {
public:
    bool canFormArray(vector<int>& arr, vector<vector<int>>& pieces) {
        set<int> x;
        for(int i=0;i<arr.size();++i){
            x.insert(arr[i]);
        }
        for(int i=0;i<pieces.size();++i){
            if(pieces[i].size()==1){
                if(x.find(pieces[i][0])!=x.end()){
                    x.erase(pieces[i][0]);
                }
                else{
                    return false;
                }
            }
            else{
                int n=pieces[i].size();
                int val=pieces[i][0];
                if(x.find(val)==x.end()) return false;
                int j=0;
                while(j<arr.size()){
                    if(arr[j]==val){
                        break;
                    }
                    j++;
                }
                int c1=0;
                for(int k=j;k<=n+j-1;++k,++c1){
                    if(x.find(pieces[i][c1])!=x.end()){
                        x.erase(pieces[i][c1]);
                        if(arr[k]==pieces[i][c1]){
                            continue;
                        }
                        else{
                            return false;
                        }
                    }
                    else{
                        return false;
                    }
                }
            }
        }
        return true;
    }
};
